// EOOEOHKLOFJ$$HBGCPAEJCJJ @ RVA 0x30C51D8

bool EOOEOHKLOFJ__HBGCPAEJCJJ(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  
                    /* try { // try from 031c51f0 to 032c521f has its CatchHandler @ 031c53c4 */
  if ((DAT_045662ad & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    DAT_045662ad = 1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031c5220 to 032c52a7 has its CatchHandler @ 031c4ff8 */
    thunk_FUN_01ba7564();
  }
  pSVar1 = EOOEOHKLOFJ_TypeInfo->static_fields->ANAIGEKGOJA;
  if (pSVar1 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    return 0 < (pSVar1->fields)._count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

