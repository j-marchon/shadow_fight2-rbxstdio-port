// TypeDefIndex 1445
// Namespace: 
// public class IHHNAHGMKIJ : IIMNGGHGKOD
// Fields:
//   private string NPFMOEOIEKM; // 0x48

// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x318AA54]
// IHHNAHGMKIJ$$DPGIIHOJJDE @ RVA 0x318AA54

void IHHNAHGMKIJ__DPGIIHOJJDE(IHHNAHGMKIJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x318AA74]
// IHHNAHGMKIJ$$.ctor @ RVA 0x318AA74

void IHHNAHGMKIJ___ctor(IHHNAHGMKIJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,7,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0328aaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x318AAAC]
// IHHNAHGMKIJ$$KCHJCGEMCGE @ RVA 0x318AAAC

System_String_o * IHHNAHGMKIJ__KCHJCGEMCGE(IHHNAHGMKIJ_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x318AAB4]
// IHHNAHGMKIJ$$HNIHOIAMDPC @ RVA 0x318AAB4

void IHHNAHGMKIJ__HNIHOIAMDPC
               (IHHNAHGMKIJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566a0a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566a0a = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

