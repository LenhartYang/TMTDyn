tmtdyn()...
	.simulation()...
		.var(symbolic_vars_vec, var_values_vec)...
		.variables(symbolic_vars_vec, var_values_vec)... % same as var
		.user_pars(value_vac)...
		.user_parameters(value_vac)... % same as user_pars
		.derive_eom(select)... % 'full_system', 'assume_small_velocities', 'no'
			.use_cpu_cores(core_no)...
			.use_single_cpu_core()...
			.collect_terms(collection_type)... % 'single_structures', 'separate_structures', 'separate_functions', 'C_functions', 'collect_most_terms'
			.simplify_derivations(select, duration_or_precision)... % select: 'symbolic' , 'decimal' , 'symbolic_decimal'
            .optimize_code()...
            .free_up_memory()...
			.assume_sparse_matrix()...
			.use_mex()...
            .plot_initial_conditions(select)... % 'all', 'final'
		.analysis()...
			.static_sim(method, times_vec)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file'}
			.dynamic_sim(method, solver, start_time, end_time)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file'}
			...													  % solver in {'matlab', 'sundials_ode', 'sundials_dae', 'radau', 'radau_mex', 'external'}
			.modal(method, time_vec)... % method in {'generate_m_file', 'edited_m_file', 'generate_mex_file', 'old_mex_file', 'generate_mex_file_from_edited_m_file'}
			.report_time_intervals(time)...
			.spatial_integration_step(steps_int)...
			.results_sample_rate(rate_int)...
		.post_process()...
			.animate(anim_frame)... % anim_frame in {null, 'show_frame'}
			.plot_points(point_no)...
			.record_video()...
			.run_user_code()...
			.report_time_step(report_time)...
			.number_of_reports(report_no)...		
	.world()...
		.g(gravity_vec)...
	.robot(name)...
		.body(name)...
			.with_mass(mass)...
			.with_inertia(inertia_matrix)...
			.with_tip_at(tip_vec)...
			.with_center_of_mass_at(com_vec)...
			.connected()... % >> joint(n_mesh)
			.connected_to_mesh_elements(mesh_no)...
		.joint(name, body_no, mesh_no)...
			.rom()...
                .default_fit_type(type, knots)... % sets both dof & spring, can be overriden later, type: {'polynomial', 'spline_piecewise', 'spline_logistic_func', 'spline_mesh'}
                .default_relaxed_state_fit_type(type, knots)... % sets only spring, type: {'polynomial', 'spline_piecewise', 'spline_logistic_func', 'spline_mesh'}
                .assume_similar_spline_knots()...
                .default_spline_growth_rate(growth_rate)...
                .default_order(order_int)...
                .growing_from(type)... % type in {'none', 'tip_growing', 'base_growing', 'sliding'}
				.length(length_i, length_e)... % start and end integration range
				.varies_with_dof(coeff,i_j, i_h, i_d)...
				.varies_with_dof_order(coeff, i_j, i_h, i_r, i_d)...
				.varies_with_dof_at_axial_location(coeff, i_j, i_h, l, i_d)...
				.varies_with_dof_at_tip(coeff, i_j, i_h, i_d)...
				.from_body_frame(condition)... % condition in {'relative', 'absolute'}
				.free_base()...
				.reference_axial_locations(val_vec)...
				.fixed_inital_values()...
			.from_body(body_no, mesh_no, axial_loc)...
			.from_body_tip(body_no, mesh_no)...
			.to_body(body_no, mesh_no, axial_loc)...
			.to_body_tip(body_no, mesh_no)...
			.with_transformation_from_body(body_no, mesh_no, axial_loc)... % >> aka transformation()
				.translation(trans_vec)...
				.trans_x(val_or_inf)...
				.trans_y(val_or_inf)...
				.trans_z(val_or_inf)...
				.rotation_angle_axis(angle_axis_vec)...
				.rot_x(val_or_inf)...
				.rot_y(val_or_inf)...
				.rot_z(val_or_inf)...
				.rot_strain(strain_vec, init_quat)...
				.rot_frenet_serret(init_tangent_axis)...
                .rot_simple_curvilinear_frame(init_tangent_axis)...
				.rot_bishop_frame(curvature_vec)...
				.rot_unit_quat(unit_quat_vec)...
				.rot_non_unit_quat(non_unit_quat_vec)...
				.dof()...
					.rom_order(order_int)...
					.not_rom()...
					.equal2(vec, n_r)...
					.similar_to_dof(coeff, i_j, i_h, i_d)...
					.coefficient_similar_to_dof_order(n_r, coeff, i_j, i_h, i_r, i_d)...
					.coefficient_similar_to_dof_at_axial_location(n_r, coeff, i_j, i_h, l, i_d)...
                    .coefficient_similar_to_dof_at_tip(n_r, coeff, i_j, i_h, i_d)...
                    .coefficient_similar_to_dof_derivative_at_axial_location(n_r, coeff, n_p, i_j, i_h, l, i_d)...
                    .coefficient_similar_to_dof_derivative_at_tip(n_r, coeff, n_p, i_j, i_h, i_d)...
					.set_rom_coefficient(n_r, value)...
					.base_value(value)... % changes spring too
					.base_director(director_double)... % changes spring too
                    .element_similar_to_dof(n_d, coeff, i_j, i_h, i_d)...
					.element_coefficient_similar_to_dof_order(n_d, n_r, coeff, i_j, i_h, i_r, i_d)...
					.element_coefficient_similar_to_dof_at_axial_location(n_d, n_r, coeff, i_j, i_h, l, i_d)...
                    .element_coefficient_similar_to_dof_at_tip(n_d, n_r, coeff, i_j, i_h, i_d)...
                    .element_coefficient_similar_to_dof_derivative_at_axial_location(n_d, n_r, coeff, n_p, i_j, i_h, l, i_d)...
                    .element_coefficient_similar_to_dof_derivative_at_tip(n_d, n_r, coeff, n_p, i_j, i_h, i_d)...
					.element_set_rom_coefficient(n_d, n_r, value)...
					.element_base_value(n_d, value)... % changes spring too
					.element_base_director(n_d, director_double)... % changes spring too
                    .axial_offset(offset)... % changes spring too
					.initial_value(init, init_type)... % init_type in {'state', 'cartesian_configuration'}
					.initial_value_from_kinematic_constraint()...
					.initial_value_axial_locations(init_s_vec)...
                    .initial_value_fit_type(type, knots)... % type: {'polynomial', 'spline_piecewise', 'spline_logistic_func'}
					.parallel_spring()... % >> spring
					.parallel_elements_active_direction(dir_bool_vec)...
					.parallel_damper()... % >> damper
					.direct_input(input_type, input_val)... % input_type in {'force', 'position}
					.direct_input_at_coefficient(n_r, input_type, input_val)... % input_type in {'force', 'position}
					.unknown_direct_input()...
					.unknown_direct_input_at_coefficient(n_r)...
			.with_transformation_to_body(body_no, mesh_no, axial_loc)... % >> aka transformation()
			.with_transformation_to_body_tip(body_no, mesh_no)... % >> aka transformation()
			.active_directions(dir_bool)...
			.fixed_directions(dir_vec)...
			.control_directions(dir_vec)... % [1 x 6 or 7]
			.known_trajectory(input_vec)...			
			.wrt_body(body_no, mesh_no, axial_loc)...
			.wrt_body_tip(body_no, mesh_no)...
			.beam_local_x_axis(x_axis_vec)...
			.beam_stiffness()... % aka spring
				.coefficient(coeff)...
				.compression_ratio(ratio)...
				.relaxed_state(init_vals, init_type)... % init_type in {'state', 'cartesian_configuration'}
				.relaxed_state_axial_locations(vec)...
				.relaxed_state_from_initial_condition()...
				.relaxed_state_from_rom_constant()...
				.boundary_condition(equal2_vec)...
				.set_relaxed_state_rom_coefficient(n_r, value)...
				.relaxed_state_coefficient_similar_to_dof_order(n_r, coeff, i_j, i_h, i_r, i_d)...
				.relaxed_state_coefficient_similar_to_dof_at_axial_location(n_r, coeff, i_j, i_h, l, i_d)...
				.relaxed_state_coefficient_similar_to_dof_at_tip(n_r, coeff, i_j, i_h, i_d)...
				.relaxed_state_base_value(value)...
				.relaxed_state_base_director(director_double)...                
				.element_set_relaxed_state_rom_coefficient(n_d, n_r, value)...
				.element_relaxed_state_coefficient_similar_to_dof_order(n_d, n_r, coeff, i_j, i_h, i_r, i_d)...
				.element_relaxed_state_coeff_similar_to_dof_at_axial_location(n_d, n_r, coeff, i_j, i_h, l, i_d)...
				.element_relaxed_state_coefficient_similar_to_dof_at_tip(n_d, n_r, coeff, i_j, i_h, i_d)...
				.element_relaxed_state_base_value(n_d, value)...
				.element_relaxed_state_base_director(n_d, director_double)...
				.relaxed_state_axial_offset(offset)...	
                .relaxed_state_fit_type(type, knots)... % type: {'polynomial', 'spline_piecewise', 'spline_logistic_func'}		
			.beam_damping()... % >> aka damper
				.viscosity(val)...
				.power(val)...
			.beam_internal_actuation(input_vec)...
		.tendon(name, body_no, mesh_no)... % >> joint()
		.constraint(name)... % >> joint()
		.jacobian_inverse_controller(name)... % >> joint()
		.mesh(name)...
			.from_file(file_name, tolerance_val)...
			.with_tolerance(tolerance_val)...
			.with_base_transformation()... % >> transformation()
			.with_node_body(name)... >> body()
			.joint(name)... >> joint()...
			.with_node_dof(name)... >> joint()
			.with_edge(name)... >> joint
		.exload(name)...
			.exerted_on_body(body_no, mesh_no, axial_loc)...
			.exerted_on_body_tip(body_no, mesh_no)...
			.wrt_reference_body(body_no, mesh_no, axial_loc)... % default ground
			.wrt_reference_body_tip(body_no, mesh_no)... % default ground
			.with_transformation()... % >> transformation
			.with_transformation_on_body(body_no, mesh_no, axial_loc)... % >> transformation
			.with_transformation_on_body_tip(body_no, mesh_no)... % >> transformation
			.force(force_vec)...
			.moment(monet_vec)...
			.unknown_directions(dirs)...
	.run()
	
	