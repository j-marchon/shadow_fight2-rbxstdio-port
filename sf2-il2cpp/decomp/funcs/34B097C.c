// KDPDBGNOFEN$$NEMMLKGAOFE @ RVA 0x34B097C

void KDPDBGNOFEN__NEMMLKGAOFE
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
                    /* try { // try from 035b0998 to 036b09a7 has its CatchHandler @ 035b0b24 */
  if ((DAT_04568555 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11558);
                    /* try { // try from 035b09c0 to 036b09c7 has its CatchHandler @ 035b0b08 */
    DAT_04568555 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
                    /* try { // try from 035b09e0 to 036b0a0b has its CatchHandler @ 035b0b38 */
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11558,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    (__this->fields)._KKNAFGJEFJG_k__BackingField = true;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
                    /* try { // try from 035b0a14 to 036b0a1f has its CatchHandler @ 035b0b00 */
                    /* try { // try from 035b0a20 to 036b0aaf has its CatchHandler @ 035b05ec */
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,5,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

