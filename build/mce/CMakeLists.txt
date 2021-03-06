################################################################################
# Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.
# The OpenAirInterface Software Alliance licenses this file to You under 
# the Apache License, Version 2.0  (the "License"); you may not use this file
# except in compliance with the License.  
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#-------------------------------------------------------------------------------
# For more information about the OpenAirInterface (OAI) Software Alliance:
#      contact@openairinterface.org
################################################################################
cmake_minimum_required(VERSION 2.8)

# Options are Debug Release RelWithDebInfo MinSizeRel
set (  CMAKE_BUILD_TYPE "Debug" )
set (  BYTE_ORDER=LITTLE_ENDIAN )
set (  DISABLE_ITTI_DETECT_SUB_TASK_ID True )
set (  DISPLAY_LICENCE_INFO            False )
set (  ENABLE_ITTI                     True )
set (  ITTI_TASK_STACK_SIZE            2097152 )
set (  ITTI_LITE                       False )
set (  LOG_OAI                         True )
set (  LOG_OAI_CLEAN_HARD              False )
set (  MESSAGE_CHART_GENERATOR         False )
set (  MCE_BUILD                       True )
set (  PACKAGE_NAME                    "MCE" )
set (  M2AP_DEBUG_LIST                 False )
set (  SECU_DEBUG                      True )
set (  SCTP_DUMP_LIST                  False )
set (  TRACE_HASHTABLE                 False )
set (  TRACE_3GPP_SPEC                 True )
set (  TRACE_XML                       False )

include(${CMAKE_CURRENT_SOURCE_DIR}/../CMakeLists.txt)
