// KKLJIDJBFEI$$GLGPFKMJKDJ @ RVA 0x3143CD4

void KKLJIDJBFEI__GLGPFKMJKDJ
               (KKLJIDJBFEI_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  LHOMEBJDFLD_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  SimpleJSON_JSONObject_o *NKLHCIIJBLL;
  MethodInfo *method_00;
  
  if ((DAT_0456676d & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_11530);
    DAT_0456676d = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11530,BBBLOLJAMJP,(MethodInfo *)0x0);
    __this_00 = (__this->fields).GBLLKHKEJOA;
    if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
      __this_01 = (KKLJIDJBFEI_o *)LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0);
      NKLHCIIJBLL = KKLJIDJBFEI__MANGEOLLGCL(__this_01,method_00);
      KDPDBGNOFEN__NPODDNIHKBO
                ((KDPDBGNOFEN_o *)__this,(PGICCMFLDPI_o *)__this_01,NKLHCIIJBLL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

