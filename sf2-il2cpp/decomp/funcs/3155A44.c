// BPDOKJBGHAG$$RandomizeObscuredVars @ RVA 0x3155A44

void BPDOKJBGHAG__RandomizeObscuredVars(BPDOKJBGHAG_o *__this,MethodInfo *method)

{
  System_Action_PONNKDFAMFM__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  System_Action_PONNKDFAMFM__o *action;
  
                    /* try { // try from 03255a50 to 03355a53 has its CatchHandler @ 0325667c */
  if ((DAT_0456683b & 1) == 0) {
    FUN_01bab630(&System_Action<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
    FUN_01bab630(&Method_BPDOKJBGHAG_<>c_EOPCNNIGHFB__);
                    /* try { // try from 03255a8c to 03355ab3 has its CatchHandler @ 03256220 */
    FUN_01bab630(&BPDOKJBGHAG_<>c_TypeInfo);
    DAT_0456683b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBDCLLADIFL;
  if ((BPDOKJBGHAG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BPDOKJBGHAG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = BPDOKJBGHAG_<>c_TypeInfo->static_fields->__9__3_0;
  if (action == (System_Action_PONNKDFAMFM__o *)0x0) {
    if ((BPDOKJBGHAG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BPDOKJBGHAG_<>c_TypeInfo,method);
    }
                    /* try { // try from 03255ae8 to 03355b13 has its CatchHandler @ 032561ec */
    action = (System_Action_PONNKDFAMFM__o *)thunk_FUN_01bda818(System_Action<PONNKDFAMFM>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &BPDOKJBGHAG_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

