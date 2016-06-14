/*******************************************************************************
**  DAVE App Name : ERU001       App Version: 1.0.16               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[ERU001_Conf.c]*/

/*******************************************************************************
 Copyright (c) 2013, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without**
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** NOTE     : Any Changes made to this file will be overwritten during Code   **
**            Generation                                                      **
**                                                                            **
********************************************************************************
** VERSION HISTORY:
********************************************************************************
** v1.0.4,  25 Jan 2013,  BRG: Initial version.
** v1.0.6,  14 Mar 2013,  BRG: Supported to XMC4200 and XMC4400 device series.
** v1.0.10, 30 Sep 2013,  BRG: Code has been updated in complaint to coding 
**                             guidelines.                           
*******************************************************************************/
/**
 * @file   ERU001_Conf.c
 *
 * @brief  This file contains the ERU001 Handle and ERU001 Handle array 
 * definition according to the configuration parameters of ERU001 GUI.
 */

/**
 * @cond INTERNAL_DOCS
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
/* Included to access ERU001 app data structure, functions & enumerations */
#include "../../inc/ERU001/ERU001.h"


/*******************************************************************************
** PRIVATE MACRO DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE TYPE DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE FUNCTION DECLARATIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE CONSTANT DEFINITIONS:
*******************************************************************************/

/**
 * @ingroup ERU001_publicparam
 * @{
 */
/*******************************************************************************
** GLOBAL CONSTANT DEFINITIONS:
*******************************************************************************/

/* This is the GUI configurations made for ERU001 app Instance */
const ERU001_HandleType ERU001_Handle0 = {
  /* Mapped ERU Unit */
  .ERURegs      = ERU1, 
  /* InputChannel  */
  .InputChannel    = (uint8_t)3,
  /* Rebuild Level Detection for Status Flag for ETL3 */ 
  .LevelDetect     = (uint8_t)1,
  /* Rising Edge Detection Enable for ETL3  */
  .RiseEdgeDetEn   = (uint8_t)1,
  /* Falling Edge Detection Enable for ETL3  */
  .FallEdgeDetEn   = (uint8_t)0,
  /* Input Source Select for ERS3  */
  .InputSrcSel     = (uint8_t)0,
  /* Input A Negation Select for ERS3  */
  .InputANegSel    = (uint8_t)0,
  /* Input B Negation Select for ERS3  */
  .InputBNegSel    = (uint8_t)0,
};
const ERU001_HandleType ERU001_Handle1 = {
  /* Mapped ERU Unit */
  .ERURegs      = ERU1, 
  /* InputChannel  */
  .InputChannel    = (uint8_t)1,
  /* Rebuild Level Detection for Status Flag for ETL1 */ 
  .LevelDetect     = (uint8_t)1,
  /* Rising Edge Detection Enable for ETL1  */
  .RiseEdgeDetEn   = (uint8_t)0,
  /* Falling Edge Detection Enable for ETL1  */
  .FallEdgeDetEn   = (uint8_t)1,
  /* Input Source Select for ERS1  */
  .InputSrcSel     = (uint8_t)0,
  /* Input A Negation Select for ERS1  */
  .InputANegSel    = (uint8_t)0,
  /* Input B Negation Select for ERS1  */
  .InputBNegSel    = (uint8_t)0,
}; 

/*******************************************************************************
** GLOBAL VARIABLE DEFINITIONS:
*******************************************************************************/
/* The variable is used to store the address of the ERU channel Handles */
ERU001_HandleType* ERU001_HandleArray[ ] = 
                   {
                     (ERU001_HandleType*) &ERU001_Handle0,
                     (ERU001_HandleType*) &ERU001_Handle1
                   };

/*******************************************************************************
** PUBLIC FUNCTION DEFINITIONS:
*******************************************************************************/  

/*******************************************************************************
** FUNCTION LIKE MACRO DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE VARIABLES:
*******************************************************************************/

/*******************************************************************************
** PRIVATE FUNCTION DEFINITIONS:
*******************************************************************************/

/**
 * @}
 */
/*CODE_BLOCK_END*/
