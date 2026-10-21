// IGJEEGBBNFC$$KGFGPIHHHIN @ RVA 0x329F484

void IGJEEGBBNFC__KGFGPIHHHIN
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool MGHHNOBLBDI,
               MethodInfo *method)

{
  byte bVar1;
  OLKKAIFGGAK_o *__this_00;
  HJNEOLCKEMD_o *pHVar2;
  float KEFILECBPMF;
  float BHOOMCEABGH;
  float HKEAKFHICAN;
  System_String_o *local_90;
  System_String_o *pSStack_88;
  int32_t local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  HJNEOLCKEMD_c *local_50;
  void *pvStack_48;
  undefined4 local_40;
  
  if ((DAT_045673bd & 1) == 0) {
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&EMJLNDCPOHB_TypeInfo);
    DAT_045673bd = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar2 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar2 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (EMJLNDCPOHB_TypeInfo->_2).naturalAligment;
    if (((pHVar2->klass->_2).naturalAligment < bVar1) ||
       ((pHVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)EMJLNDCPOHB_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar2);
    }
    local_40._0_1_ = pHVar2[1].fields.super.GBBHFPBFOPI;
    local_40._1_1_ = (bool_conflict)pHVar2[1].fields.super.field_0x1;
    local_40._2_2_ = *(undefined2 *)&pHVar2[1].fields.super.field_0x2;
    pvStack_48 = pHVar2[1].monitor;
    local_50 = pHVar2[1].klass;
    KEFILECBPMF = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                             (MethodInfo *)0x0);
    local_70._8_8_ = *(undefined8 *)((long)&pHVar2[1].fields.super._MEFGNAIILBJ_k__BackingField + 4)
    ;
    local_70._0_8_ = *(undefined8 *)&pHVar2[1].fields.super.BEMCNJHEADJ;
    local_70._16_4_ = *(undefined4 *)((long)&pHVar2[1].fields._COIPKAKHDFP_k__BackingField + 4);
    BHOOMCEABGH = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                             (MethodInfo *)0x0);
    pSStack_88 = pHVar2[1].fields._HFALHOCIDCH_k__BackingField;
    local_90 = pHVar2[1].fields._APNFLKNBGKE_k__BackingField;
    local_80 = pHVar2[1].fields.JDNKKGPNHPB.fields.currentCryptoKey;
    HKEAKFHICAN = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                             (MethodInfo *)0x0);
    __this_00 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    __this = (IGJEEGBBNFC_o *)0x0;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      if (MGHHNOBLBDI) {
        OLKKAIFGGAK__KHBOGPDOCBJ(__this_00,(MethodInfo *)0x0);
      }
      else {
        OLKKAIFGGAK__KHBABBEFPJE(__this_00,KEFILECBPMF,BHOOMCEABGH,HKEAKFHICAN,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

