// CFEANGJDHEE$$PFLDNJFAJPK @ RVA 0x30AECD0

void CFEANGJDHEE__PFLDNJFAJPK
               (GHACLGGJIKK_o *EFENHAFFBAG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  DBLGMIJFILB_o item;
  CFEANGJDHEE_c *method_00;
  CFEANGJDHEE_o *pCVar1;
  System_Collections_Generic_Queue_DBLGMIJFILB__o *__this;
  GHACLGGJIKK_o *local_40;
  System_String_array *local_38;
  
  if ((DAT_045661c6 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Enqueue__);
    DAT_045661c6 = 1;
  }
                    /* try { // try from 031aed20 to 032aed23 has its CatchHandler @ 031aee14 */
                    /* try { // try from 031aed24 to 032aed27 has its CatchHandler @ 031aee10 */
                    /* try { // try from 031aed28 to 032aee2f has its CatchHandler @ 031ae8b4 */
  local_38 = (System_String_array *)0x0;
  local_40 = EFENHAFFBAG;
  thunk_FUN_01c20e04(&local_40,EFENHAFFBAG);
  local_38 = OPAEPDIIOEB;
  thunk_FUN_01c20e04(&local_38,OPAEPDIIOEB);
  method_00 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar1 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)method_00);
  if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
     (__this = (pCVar1->fields).JBNEIFBJCJN,
     __this != (System_Collections_Generic_Queue_DBLGMIJFILB__o *)0x0)) {
    item.fields.OPAEPDIIOEB = local_38;
    item.fields.EFENHAFFBAG = local_40;
    System_Collections_Generic_Queue<DBLGMIJFILB>__Enqueue
              (__this,item,Method_System_Collections_Generic_Queue<DBLGMIJFILB>_Enqueue__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

