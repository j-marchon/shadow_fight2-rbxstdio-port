// ACAEKBNCODE$$NDNPGAKJLHM @ RVA 0x33ADC0C

void ACAEKBNCODE__NDNPGAKJLHM(ACAEKBNCODE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034adc1c to 035adc43 has its CatchHandler @ 034ae1ac */
  if ((DAT_04567d25 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Clear__);
    DAT_04567d25 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).PGDGCNKLKMN;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_ONPHBGJDFBM>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

