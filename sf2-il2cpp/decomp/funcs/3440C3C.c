// InControl.InputControl$$get_IsNotNull @ RVA 0x3440C3C

bool InControl_InputControl__get_IsNotNull(InControl_InputControl_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03540c4c to 03640c4f has its CatchHandler @ 03540c74 */
                    /* try { // try from 03540c50 to 03640c93 has its CatchHandler @ 03540aac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bf8 with catch @ 03540c54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bdc with catch @ 03540c58
                        */
  if ((DAT_0456821b & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540c08 with catch @ 03540c5c
                        */
    FUN_01bab630(&InControl_InputControl_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bc8 with catch @ 03540c68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540bb8 with catch @ 03540c6c
                        */
    DAT_0456821b = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540ba8 with catch @ 03540c70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540c4c with catch @ 03540c74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540b98 with catch @ 03540c78
                        */
  if ((InControl_InputControl_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03540b84 with catch @ 03540c7c
                        */
    thunk_FUN_01ba7564(InControl_InputControl_TypeInfo,method);
  }
                    /* try { // try from 03540c94 to 03640c97 has its CatchHandler @ 03540cb8 */
                    /* try { // try from 03540c98 to 03640cbf has its CatchHandler @ 03540aac */
  return __this != InControl_InputControl_TypeInfo->static_fields->Null;
}

