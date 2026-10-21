// InControl.InputManager$$set_MenuWasPressed @ RVA 0x32151E4

void InControl_InputManager__set_MenuWasPressed(bool value,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033151ec to 034151f3 has its CatchHandler @ 033151fc */
                    /* try { // try from 033151f4 to 03415223 has its CatchHandler @ 0331507c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151a0 with catch @ 033151f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151ec with catch @ 033151fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151bc with catch @ 03315200
                        */
  if ((DAT_04566ebe & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151a4 with catch @ 03315204
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331514c with catch @ 03315208
                        */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebe = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315224 to 03415227 has its CatchHandler @ 03315248 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
                    /* try { // try from 03315228 to 0341524f has its CatchHandler @ 0331507c */
  }
  InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = value;
  return;
}

