// InControl.InputControl$$get_IsNull @ RVA 0x3440A1C

bool InControl_InputControl__get_IsNull(InControl_InputControl_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03540a30 to 03640a33 has its CatchHandler @ 03540a44 */
                    /* try { // try from 03540a34 to 03640a5f has its CatchHandler @ 03540930 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409e8 with catch @ 03540a38
                        */
  if ((DAT_0456821a & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409f8 with catch @ 03540a3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409d8 with catch @ 03540a40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540a30 with catch @ 03540a44
                        */
    FUN_01bab630(&InControl_InputControl_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035409c4 with catch @ 03540a48
                        */
    DAT_0456821a = 1;
    method = extraout_x1;
  }
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputControl_TypeInfo,method);
                    /* try { // try from 03540a60 to 03640a63 has its CatchHandler @ 03540a84 */
  }
                    /* try { // try from 03540a64 to 03640a8b has its CatchHandler @ 03540930 */
  return __this == InControl_InputControl_TypeInfo->static_fields->Null;
}

