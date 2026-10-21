// KKLJIDJBFEI$$OBJHJLFDIAM @ RVA 0x3148E94

void KKLJIDJBFEI__OBJHJLFDIAM(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t CBFBKNECBMP;
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  Il2CppObject *pIVar2;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  undefined8 *puVar3;
  
  if ((DAT_04566797 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
    FUN_01bab630(&StringLiteral_5963);
    FUN_01bab630(&StringLiteral_11532);
    FUN_01bab630(&StringLiteral_5964);
    DAT_04566797 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11532,BBBLOLJAMJP,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
      puVar3 = &StringLiteral_5964;
LAB_03248fdc:
      KKLJIDJBFEI__FNFGGGJGPBB(__this,(System_String_o *)*puVar3,-1,in_x3);
      return;
    }
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        CBFBKNECBMP = *(int32_t *)&pIVar2[5].klass;
        if (CBFBKNECBMP == 0) {
          CBFBKNECBMP = -1;
        }
        KKLJIDJBFEI__BCOMIMBOGIM
                  (__this,pIVar2[1].monitor,JLICGPAEBHN,pIVar2[3].monitor,CBFBKNECBMP,in_x5);
        return;
      }
    }
    else {
      if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField != 0x2715) {
        puVar3 = &StringLiteral_5963;
        goto LAB_03248fdc;
      }
      KKLJIDJBFEI__ODIHHGKNPDI(__this,method_00);
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK
                  (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

