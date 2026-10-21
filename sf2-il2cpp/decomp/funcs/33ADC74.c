// ACAEKBNCODE$$AOPEMKAGCCD @ RVA 0x33ADC74

ONPHBGJDFBM_o *
ACAEKBNCODE__AOPEMKAGCCD(ACAEKBNCODE_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  ONPHBGJDFBM_o *local_28;
  
                    /* try { // try from 034adc78 to 035adca3 has its CatchHandler @ 034ae1a8 */
  if ((DAT_04567d27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_TryGetValue__);
    DAT_04567d27 = 1;
  }
  local_28 = (ONPHBGJDFBM_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__TryGetValue
              (__this_00,OGPGLGPMEPD,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_TryGetValue__);
                    /* try { // try from 034adcd8 to 035adce3 has its CatchHandler @ 034ae1a0 */
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

