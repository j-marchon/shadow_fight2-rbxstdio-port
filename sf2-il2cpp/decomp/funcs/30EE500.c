// HOOAAGABMBL$$CKBLOIOCNPP @ RVA 0x30EE500

int32_t HOOAAGABMBL__CKBLOIOCNPP(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_01;
  
  if ((DAT_0456640f & 1) == 0) {
    FUN_01bab630(&System_Action<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&Method_HOOAAGABMBL_LLGACDCGDJB_MBLFJGKKDIO__);
    FUN_01bab630(&HOOAAGABMBL_LLGACDCGDJB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
    DAT_0456640f = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(HOOAAGABMBL_LLGACDCGDJB_TypeInfo,method);
                    /* try { // try from 031ee568 to 032ee62f has its CatchHandler @ 031ee568
                       catch() { ... } // from try @ 031ee568 with catch @ 031ee568
                       catch() { ... } // from try @ 031ee6c0 with catch @ 031ee568
                       catch() { ... } // from try @ 031ee744 with catch @ 031ee568
                       catch() { ... } // from try @ 031ee7dc with catch @ 031ee568 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined4 *)&__this_00[1].klass = 0x80000000;
    __this_01 = (__this->fields)._PIKFJCELJID_k__BackingField;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<PONNKDFAMFM>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_ForEach__);
      return *(int32_t *)&__this_00[1].klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

