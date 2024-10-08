
// initialize the different ids
void get_ID()
{
  const char* joint_name;
  const char* actuator_name;
  int i, jointid;

  joint_name = "FR_hip_joint";
  actuator_name = "FR_hip";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FR_hip_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FR_hip_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FR_hip_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,FR_hip_joint_qpos_adr,FR_hip_joint_qvel_adr,FR_hip_joint_actuatorID);

  joint_name = "FR_thigh_joint";
  actuator_name = "FR_thigh";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FR_thigh_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FR_thigh_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FR_thigh_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid, FR_thigh_joint_qpos_adr,FR_thigh_joint_qvel_adr,FR_thigh_joint_actuatorID);


  joint_name = "FR_calf_joint";
  actuator_name = "FR_calf";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FR_calf_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FR_calf_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FR_calf_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,FR_calf_joint_qpos_adr,FR_calf_joint_qvel_adr,FR_calf_joint_actuatorID);

  joint_name = "FL_hip_joint";
  actuator_name = "FL_hip";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FL_hip_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FL_hip_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FL_hip_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,FL_hip_joint_qpos_adr,FL_hip_joint_qvel_adr,FL_hip_joint_actuatorID);

  joint_name = "FL_thigh_joint";
  actuator_name = "FL_thigh";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FL_thigh_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FL_thigh_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FL_thigh_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid, FL_thigh_joint_qpos_adr,FL_thigh_joint_qvel_adr,FL_thigh_joint_actuatorID);

  joint_name = "FL_calf_joint";
  actuator_name = "FL_calf";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int FL_calf_joint_qpos_adr = m->jnt_qposadr[jointid];
  int FL_calf_joint_qvel_adr = m->jnt_dofadr[jointid];
  int FL_calf_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,FL_calf_joint_qpos_adr,FL_calf_joint_qvel_adr,FL_calf_joint_actuatorID);

  joint_name = "RR_hip_joint";
  actuator_name = "RR_hip";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RR_hip_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RR_hip_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RR_hip_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,RR_hip_joint_qpos_adr,RR_hip_joint_qvel_adr,RR_hip_joint_actuatorID);

  joint_name = "RR_thigh_joint";
  actuator_name = "RR_thigh";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RR_thigh_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RR_thigh_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RR_thigh_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid, RR_thigh_joint_qpos_adr,RR_thigh_joint_qvel_adr,RR_thigh_joint_actuatorID);

  joint_name = "RR_calf_joint";
  actuator_name = "RR_calf";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RR_calf_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RR_calf_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RR_calf_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,RR_calf_joint_qpos_adr,RR_calf_joint_qvel_adr,RR_calf_joint_actuatorID);


  joint_name = "RL_hip_joint";
  actuator_name = "RL_hip";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RL_hip_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RL_hip_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RL_hip_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,RL_hip_joint_qpos_adr,RL_hip_joint_qvel_adr,RL_hip_joint_actuatorID);

  joint_name = "RL_thigh_joint";
  actuator_name = "RL_thigh";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RL_thigh_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RL_thigh_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RL_thigh_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid, RL_thigh_joint_qpos_adr,RL_thigh_joint_qvel_adr,RL_thigh_joint_actuatorID);

  joint_name = "RL_calf_joint";
  actuator_name = "RL_calf";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int RL_calf_joint_qpos_adr = m->jnt_qposadr[jointid];
  int RL_calf_joint_qvel_adr = m->jnt_dofadr[jointid];
  int RL_calf_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);
  //printf("%d %d %d %d \n",jointid,RL_calf_joint_qpos_adr,RL_calf_joint_qvel_adr,RL_calf_joint_actuatorID);

  //arm position, velocity, and actuator
  joint_name = "joint1";
  actuator_name = "j1_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int joint1_qpos_adr = m->jnt_qposadr[jointid];
  int joint1_qvel_adr = m->jnt_dofadr[jointid];
  int joint1_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  joint_name = "joint2";
  actuator_name = "j2_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int joint2_qpos_adr = m->jnt_qposadr[jointid];
  int joint2_qvel_adr = m->jnt_dofadr[jointid];
  int joint2_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  joint_name = "joint3";
  actuator_name = "j3_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int joint3_qpos_adr = m->jnt_qposadr[jointid];
  int joint3_qvel_adr = m->jnt_dofadr[jointid];
  int joint3_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  joint_name = "joint4";
  actuator_name = "j4_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int joint4_qpos_adr = m->jnt_qposadr[jointid];
  int joint4_qvel_adr = m->jnt_dofadr[jointid];
  int joint4_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  joint_name = "grip1_p";
  actuator_name = "grip1_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int grip1_qpos_adr = m->jnt_qposadr[jointid];
  int grip1_qvel_adr = m->jnt_dofadr[jointid];
  int grip1_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  joint_name = "grip2_p";
  actuator_name = "grip2_p";
  jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  int grip2_qpos_adr = m->jnt_qposadr[jointid];
  int grip2_qvel_adr = m->jnt_dofadr[jointid];
  int grip2_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, actuator_name);

  //Base
  const char* base_pos_name = "Body_Pos";
  int base_sensorID = mj_name2id(m, mjOBJ_SENSOR, base_pos_name);
  int base_sensor_adr = m->sensor_adr[base_sensorID];

  const char* base_quat_name = "Body_Quat";
  int base_quat_sensorID = mj_name2id(m, mjOBJ_SENSOR, base_quat_name);
  int base_quat_sensor_adr = m->sensor_adr[base_quat_sensorID];

  int base_linvel_sensorID = mj_name2id(m, mjOBJ_SENSOR, "Body_LinVel");
  int base_linvel_sensor_adr = m->sensor_adr[base_linvel_sensorID];
  int base_angvel_sensorID = mj_name2id(m, mjOBJ_SENSOR, "Body_Gyro");
  int base_angvel_sensor_adr = m->sensor_adr[base_angvel_sensorID];

  int base_linacc_sensorID = mj_name2id(m, mjOBJ_SENSOR, "Body_Acc");
  int base_linacc_sensor_adr = m->sensor_adr[base_linacc_sensorID];

  const char* pos_FR_foot = "FR_foot_pos";
  int pos_FR_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FR_foot);
  int pos_FR_adr = m->sensor_adr[pos_FR_sensorID];

  const char* pos_FL_foot = "FL_foot_pos";
  int pos_FL_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FL_foot);
  int pos_FL_adr = m->sensor_adr[pos_FL_sensorID];

  const char* pos_RR_foot = "RR_foot_pos";
  int pos_RR_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RR_foot);
  int pos_RR_adr = m->sensor_adr[pos_RR_sensorID];

  const char* pos_RL_foot = "RL_foot_pos";
  int pos_RL_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RL_foot);
  int pos_RL_adr = m->sensor_adr[pos_RL_sensorID];

  const char* pos_FR_shoulder = "FR_shoulder_pos";
  int pos_FR_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FR_shoulder);
  int pos_FR_shoulder_adr = m->sensor_adr[pos_FR_shoulder_sensorID];

  const char* pos_FL_shoulder = "FL_shoulder_pos";
  int pos_FL_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FL_shoulder);
  int pos_FL_shoulder_adr = m->sensor_adr[pos_FL_shoulder_sensorID];

  const char* pos_RR_shoulder = "RR_shoulder_pos";
  int pos_RR_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RR_shoulder);
  int pos_RR_shoulder_adr = m->sensor_adr[pos_RR_shoulder_sensorID];

  const char* pos_RL_shoulder = "RL_shoulder_pos";
  int pos_RL_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RL_shoulder);
  int pos_RL_shoulder_adr = m->sensor_adr[pos_RL_shoulder_sensorID];

  const char* pos_FR_elbow = "FR_elbow_pos";
  int pos_FR_elbow_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FR_elbow);
  int pos_FR_elbow_adr = m->sensor_adr[pos_FR_elbow_sensorID];

  const char* pos_FL_elbow = "FL_elbow_pos";
  int pos_FL_elbow_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_FL_elbow);
  int pos_FL_elbow_adr = m->sensor_adr[pos_FL_elbow_sensorID];

  const char* pos_RR_elbow = "RR_elbow_pos";
  int pos_RR_elbow_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RR_elbow);
  int pos_RR_elbow_adr = m->sensor_adr[pos_RR_elbow_sensorID];

  const char* pos_RL_elbow = "RL_elbow_pos";
  int pos_RL_elbow_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_RL_elbow);
  int pos_RL_elbow_adr = m->sensor_adr[pos_RL_elbow_sensorID];

  //COM sensor
  const char* robot_com = "robot_com";
  int com_sensorID = mj_name2id(m, mjOBJ_SENSOR, robot_com);
  int com_sensor_adr = m->sensor_adr[com_sensorID];

  //velocity
  const char* vel_FR_foot = "FR_foot_vel";
  int vel_FR_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_FR_foot);
  int vel_FR_adr = m->sensor_adr[vel_FR_sensorID];

  const char* vel_FL_foot = "FL_foot_vel";
  int vel_FL_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_FL_foot);
  int vel_FL_adr = m->sensor_adr[vel_FL_sensorID];

  const char* vel_RR_foot = "RR_foot_vel";
  int vel_RR_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_RR_foot);
  int vel_RR_adr = m->sensor_adr[vel_RR_sensorID];

  const char* vel_RL_foot = "RL_foot_vel";
  int vel_RL_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_RL_foot);
  int vel_RL_adr = m->sensor_adr[vel_RL_sensorID];

  const char* vel_FR_shoulder = "FR_shoulder_vel";
  int vel_FR_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_FR_shoulder);
  int vel_FR_shoulder_adr = m->sensor_adr[vel_FR_shoulder_sensorID];

  const char* vel_FL_shoulder = "FL_shoulder_vel";
  int vel_FL_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_FL_shoulder);
  int vel_FL_shoulder_adr = m->sensor_adr[vel_FL_shoulder_sensorID];

  const char* vel_RR_shoulder = "RR_shoulder_vel";
  int vel_RR_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_RR_shoulder);
  int vel_RR_shoulder_adr = m->sensor_adr[vel_RR_shoulder_sensorID];

  const char* vel_RL_shoulder = "RL_shoulder_vel";
  int vel_RL_shoulder_sensorID = mj_name2id(m, mjOBJ_SENSOR, vel_RL_shoulder);
  int vel_RL_shoulder_adr = m->sensor_adr[vel_RL_shoulder_sensorID];

  //contact sensors
  //const char* force_FR_foot = "FR_footForce";
  int force_FR_foot_sensorID = mj_name2id(m, mjOBJ_SENSOR, "FR_footForce");
  int force_FR_foot_adr = m->sensor_adr[force_FR_foot_sensorID];

  int force_FL_foot_sensorID = mj_name2id(m, mjOBJ_SENSOR, "FL_footForce");
  int force_FL_foot_adr = m->sensor_adr[force_FL_foot_sensorID];

  int force_RR_foot_sensorID = mj_name2id(m, mjOBJ_SENSOR, "RR_footForce");
  int force_RR_foot_adr = m->sensor_adr[force_RR_foot_sensorID];

  int force_RL_foot_sensorID = mj_name2id(m, mjOBJ_SENSOR, "RL_footForce");
  int force_RL_foot_adr = m->sensor_adr[force_RL_foot_sensorID];


  // obstacle sensors
  const char* pos_Obstacle1 = "object1_pos";
  int pos_Obstacle1_sensorID = mj_name2id(m, mjOBJ_SENSOR, pos_Obstacle1);
  int pos_Obstacle1_adr = m->sensor_adr[pos_Obstacle1_sensorID];


  // joint_name = "FR_hip_joint";
  // jointid = mj_name2id(m, mjOBJ_JOINT, joint_name);
  // printf("joint id = %d \n",jointid);
  // printf("*************\n");
  // int FR_hip_joint_qpos_adr = m->jnt_qposadr[m->body_jntadr[jointid]];
  // int FR_hip_joint_qvel_adr = m->jnt_dofadr[m->body_jntadr[jointid]];
  // int FR_hip_joint_actuatorID = mj_name2id(m, mjOBJ_ACTUATOR, joint_name);
  // printf("%d %d %d \n",FR_hip_joint_qpos_adr,FR_hip_joint_qvel_adr,FR_hip_joint_actuatorID);



  int temp_IDq[] = {FR_hip_joint_qpos_adr,FR_thigh_joint_qpos_adr,FR_calf_joint_qpos_adr,
                    FL_hip_joint_qpos_adr,FL_thigh_joint_qpos_adr,FL_calf_joint_qpos_adr,
                    RR_hip_joint_qpos_adr,RR_thigh_joint_qpos_adr,RR_calf_joint_qpos_adr,
                    RL_hip_joint_qpos_adr,RL_thigh_joint_qpos_adr,RL_calf_joint_qpos_adr};

  int temp_IDq_arm[] = {joint1_qpos_adr,joint2_qpos_adr,
                        joint3_qpos_adr,joint4_qpos_adr,
                        grip1_qpos_adr,grip2_qpos_adr};

  int temp_IDv[] = {FR_hip_joint_qvel_adr,FR_thigh_joint_qvel_adr,FR_calf_joint_qvel_adr,
                    FL_hip_joint_qvel_adr,FL_thigh_joint_qvel_adr,FL_calf_joint_qvel_adr,
                    RR_hip_joint_qvel_adr,RR_thigh_joint_qvel_adr,RR_calf_joint_qvel_adr,
                    RL_hip_joint_qvel_adr,RL_thigh_joint_qvel_adr,RL_calf_joint_qvel_adr};

  int temp_IDT[] = {FR_hip_joint_actuatorID,FR_thigh_joint_actuatorID,FR_calf_joint_actuatorID,
                    FL_hip_joint_actuatorID,FL_thigh_joint_actuatorID,FL_calf_joint_actuatorID,
                    RR_hip_joint_actuatorID,RR_thigh_joint_actuatorID,RR_calf_joint_actuatorID,
                    RL_hip_joint_actuatorID,RL_thigh_joint_actuatorID,RL_calf_joint_actuatorID};

  int temp_IDT_arm[] = {joint1_actuatorID,joint2_actuatorID,
                                          joint3_actuatorID,joint4_actuatorID,
                                          grip1_actuatorID,grip2_actuatorID};

  int temp_baseID[] = {base_sensor_adr, base_sensor_adr+1, base_sensor_adr+2,
                      base_quat_sensor_adr, base_quat_sensor_adr+1, base_quat_sensor_adr+2, base_quat_sensor_adr+3,  //w component should be last
                      base_angvel_sensor_adr, base_angvel_sensor_adr+1, base_angvel_sensor_adr+2,
                      base_linacc_sensor_adr, base_linacc_sensor_adr+1, base_linacc_sensor_adr+2,
                      base_linvel_sensor_adr, base_linvel_sensor_adr+1, base_linvel_sensor_adr+2};

  int temp_endeffectorID[] = {pos_FR_adr,pos_FR_adr+1,pos_FR_adr+2,
                              pos_FL_adr,pos_FL_adr+1,pos_FL_adr+2,
                              pos_RR_adr,pos_RR_adr+1,pos_RR_adr+2,
                              pos_RL_adr,pos_RL_adr+1,pos_RL_adr+2};

  int temp_shoulderID[] = {pos_FR_shoulder_adr,pos_FR_shoulder_adr+1,pos_FR_shoulder_adr+2,
                            pos_FL_shoulder_adr,pos_FL_shoulder_adr+1,pos_FL_shoulder_adr+2,
                            pos_RR_shoulder_adr,pos_RR_shoulder_adr+1,pos_RR_shoulder_adr+2,
                            pos_RL_shoulder_adr,pos_RL_shoulder_adr+1,pos_RL_shoulder_adr+2};

  int temp_elbowID[] = {pos_FR_elbow_adr,pos_FR_elbow_adr+1,pos_FR_elbow_adr+2,
                           pos_FL_elbow_adr,pos_FL_elbow_adr+1,pos_FL_elbow_adr+2,
                           pos_RR_elbow_adr,pos_RR_elbow_adr+1,pos_RR_elbow_adr+2,
                           pos_RL_elbow_adr,pos_RL_elbow_adr+1,pos_RL_elbow_adr+2};

  int temp_endeffectorID2[] = {vel_FR_adr,vel_FR_adr+1,vel_FR_adr+2,
                            vel_FL_adr,vel_FL_adr+1,vel_FL_adr+2,
                            vel_RR_adr,vel_RR_adr+1,vel_RR_adr+2,
                            vel_RL_adr,vel_RL_adr+1,vel_RL_adr+2};

  int temp_shoulderID2[] = {vel_FR_shoulder_adr,vel_FR_shoulder_adr+1,vel_FR_shoulder_adr+2,
                          vel_FL_shoulder_adr,vel_FL_shoulder_adr+1,vel_FL_shoulder_adr+2,
                          vel_RR_shoulder_adr,vel_RR_shoulder_adr+1,vel_RR_shoulder_adr+2,
                          vel_RL_shoulder_adr,vel_RL_shoulder_adr+1,vel_RL_shoulder_adr+2};


  int temp_comID[] = {com_sensor_adr,com_sensor_adr+1,com_sensor_adr+2};

  int temp_footForceID[] = {force_FR_foot_adr,force_FL_foot_adr,force_RR_foot_adr,force_RL_foot_adr};

  // set temp IDs for obstacle x,y,z coordinates
  int temp_obstacleID[] = {pos_Obstacle1_adr,pos_Obstacle1_adr+1,pos_Obstacle1_adr+2};

  for (i=0;i<nact;i++)
    {
      q_id[i] = temp_IDq[i];
      v_id[i] = temp_IDv[i];
      act_id[i] = temp_IDT[i];
    }

  for (i=0;i<narm;i++)
  {
  q_arm_id[i] =  temp_IDq_arm[i];
  act_arm_id[i] = temp_IDT_arm[i];
  }

  for (i=0;i<nbase;i++)
  {
    base_stateid[i] = temp_baseID[i];
  }

  for (i=0;i<nendeff;i++)
  {
    endeff_stateid[i] = temp_endeffectorID[i];
    shoulder_stateid[i] = temp_shoulderID[i];
    elbow_stateid[i] = temp_elbowID[i];

    endeff_velid[i] = temp_endeffectorID2[i];
    shoulder_velid[i] = temp_shoulderID2[i];
  }

  for (i=0;i<3;i++)
  com_id[i] = temp_comID[i];

  for (i=0;i<4;i++)
  footForce_id[i]= temp_footForceID[i];

  // set Obstacle ID
  for (i=0;i<3;i++)
  obstacle_id[i] = temp_obstacleID[i]; 

  printf("\n\n ************ All joint IDs set ***** \n\n");

}


