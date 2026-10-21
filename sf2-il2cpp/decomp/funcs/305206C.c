// IKMOIKFPPBF$$RandomizeObscuredVars @ RVA 0x305206C

void IKMOIKFPPBF__RandomizeObscuredVars(MethodInfo *method)

{
  System_Action_ObscuredString__o **ppSVar1;
  System_Collections_Generic_List_ObscuredString__o *__this;
  System_Action_ObscuredString__o *action;
  
                    /* catch() { ... } // from try @ 03152068 with catch @ 03152078 */
                    /* try { // try from 03152084 to 0325208f has its CatchHandler @ 031520a4 */
  if ((DAT_04565e52 & 1) == 0) {
                    /* try { // try from 03152090 to 0325209b has its CatchHandler @ 03151f64 */
    FUN_01bab630(&System_Action<ObscuredString>_TypeInfo);
                    /* try { // try from 0315209c to 032520a3 has its CatchHandler @ 031520a4 */
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03152084 with catch @ 031520a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0315209c with catch @ 031520a4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    FUN_01bab630(&Method_IKMOIKFPPBF_<>c_PBCDGCEANDP__);
    FUN_01bab630(&IKMOIKFPPBF_<>c_TypeInfo);
    DAT_04565e52 = 1;
  }
  if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IKMOIKFPPBF_TypeInfo->static_fields->ODDBHAIDAOM;
  if (__this != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__10_0;
    if (action == (System_Action_ObscuredString__o *)0x0) {
      if ((IKMOIKFPPBF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_ObscuredString__o *)
               thunk_FUN_01bda818(System_Action<ObscuredString>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &IKMOIKFPPBF_<>c_TypeInfo->static_fields->__9__10_0;
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ObscuredString>_ForEach__);
    return;
  }
  return;
}

