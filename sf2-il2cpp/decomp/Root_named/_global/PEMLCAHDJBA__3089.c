// TypeDefIndex 3089
// Namespace: 
// public class PEMLCAHDJBA : ILGLOCBJFEG
// Fields:
//   private int LGKFKNGIPDM; // 0x38

// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x34C9A6C]
// PEMLCAHDJBA$$EPBENPDCBFE @ RVA 0x34C9A6C

bool PEMLCAHDJBA__EPBENPDCBFE
               (PEMLCAHDJBA_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  Model_o *pOVar4;
  
  pOVar4 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    bVar2 = false;
  }
  else {
    if (pOVar4 == (Model_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar4->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields).LGKFKNGIPDM;
    bVar2 = iVar1 == 0 || iVar1 == iVar3;
  }
  return bVar2;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34C9ACC]
// PEMLCAHDJBA$$HNIHOIAMDPC @ RVA 0x34C9ACC

void PEMLCAHDJBA__HNIHOIAMDPC
               (PEMLCAHDJBA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04568654 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568654 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar1 = HDBNGIBFEBA__GMINMDIFAIE((HDBNGIBFEBA_o *)__this,KGLJICLJHEL,(MethodInfo *)0x0);
      (__this->fields).LGKFKNGIPDM = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C9B80]
// PEMLCAHDJBA$$.ctor @ RVA 0x34C9B80

void PEMLCAHDJBA___ctor(PEMLCAHDJBA_o *__this,MethodInfo *method)

{
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,4,(MethodInfo *)0x0);
  return;
}

