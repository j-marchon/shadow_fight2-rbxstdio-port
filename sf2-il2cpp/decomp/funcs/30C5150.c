// EOOEOHKLOFJ$$CKGAPAOFFPH @ RVA 0x30C5150

void EOOEOHKLOFJ__CKGAPAOFFPH(System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ac & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
                    /* try { // try from 031c5180 to 032c51a7 has its CatchHandler @ 031c53bc */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    DAT_045662ac = 1;
    method = extraout_x1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo,method);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this,(Il2CppObject *)JAFADHFFBPK,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

