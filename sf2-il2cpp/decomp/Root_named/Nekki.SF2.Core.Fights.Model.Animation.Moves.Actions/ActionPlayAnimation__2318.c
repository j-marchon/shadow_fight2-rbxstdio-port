// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionPlayAnimation  (obfuscated BDJGLFNEODH)
// TypeDefIndex 2318
// Namespace: 
// public class ActionPlayAnimation : ActionAnimation
// Fields:
//   private string CCGKGNODMPF; // 0x48
//   private bool JGFKKJBKDIC; // 0x50
//   private string PMECMPHLIAC; // 0x58

// ===== public string BHNJOCMPKGM()  [RVA 0x331C59C]
// ActionPlayAnimation$$BHNJOCMPKGM @ RVA 0x331C59C

System_String_o * ActionPlayAnimation__BHNJOCMPKGM(ActionPlayAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).CCGKGNODMPF;
}


// ===== public string BDBLGFHCFOB()  [RVA 0x331C5A4]
// ActionPlayAnimation$$BDBLGFHCFOB @ RVA 0x331C5A4

System_String_o * ActionPlayAnimation__BDBLGFHCFOB(ActionPlayAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).PMECMPHLIAC;
}


// ===== public bool LKMLDOFPGPI()  [RVA 0x331C5AC]
// ActionPlayAnimation$$LKMLDOFPGPI @ RVA 0x331C5AC

bool ActionPlayAnimation__LKMLDOFPGPI(ActionPlayAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).JGFKKJBKDIC;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x331C5B4]
// ActionPlayAnimation$$HNIHOIAMDPC @ RVA 0x331C5B4

void ActionPlayAnimation__HNIHOIAMDPC
               (ActionPlayAnimation_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04567820 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_6538/*"ForcePlay"*/);
    FUN_01bab630(&StringLiteral_4332/*"ChildName"*/);
    DAT_04567820 = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4332/*"ChildName"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).CCGKGNODMPF = pSVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 0341c67c to 0351c6a3 has its CatchHandler @ 0341c8e8 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields).PMECMPHLIAC = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0341c6d8 to 0351c703 has its CatchHandler @ 0341c8e4 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6538/*"ForcePlay"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).JGFKKJBKDIC = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x331C714]
// ActionPlayAnimation$$.ctor @ RVA 0x331C714

void ActionPlayAnimation___ctor(ActionPlayAnimation_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ActionAnimation___ctor((ActionAnimation_o *)__this,0x11,(MethodInfo *)0x0);
                    /* try { // try from 0341c740 to 0351c747 has its CatchHandler @ 0341c8d4 */
                    /* WARNING: Could not recover jumptable at 0x0341c748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x331C74C]
// ActionPlayAnimation$$DPGIIHOJJDE @ RVA 0x331C74C

void ActionPlayAnimation__DPGIIHOJJDE(ActionPlayAnimation_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
                    /* try { // try from 0341c750 to 0351c757 has its CatchHandler @ 0341c8d8 */
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0341c764 to 0351c767 has its CatchHandler @ 0341c8dc */
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

