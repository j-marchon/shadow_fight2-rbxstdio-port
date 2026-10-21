// KDPDBGNOFEN$$CHBPEDDCIHG @ RVA 0x34AF0A4

void KDPDBGNOFEN__CHBPEDDCIHG
               (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *JPLEIGKMFDA,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_00;
  
  if ((DAT_0456854c & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
    FUN_01bab630(&StringLiteral_11560);
    DAT_0456854c = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11560,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).DDBFMMHDCBK;
    if (__this_00 != (MOEEMFAHGPL_PEDENGEGDNI__o *)0x0) {
      JGGEJJLPMNL<object,_Int32Enum>__FLOAPDCEIDB
                ((JGGEJJLPMNL_TArgs__TEventType__o *)__this_00,3,(Il2CppObject *)0x0,
                 Method_JGGEJJLPMNL<MDOKGPFICNK<PEDENGEGDNI>,_PEDENGEGDNI>_FLOAPDCEIDB__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

