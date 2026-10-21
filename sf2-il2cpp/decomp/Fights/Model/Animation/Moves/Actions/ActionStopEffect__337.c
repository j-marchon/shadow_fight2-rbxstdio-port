// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionStopEffect  (obfuscated HPNBNJKDGLB)
// TypeDefIndex 337
// Namespace: 
// public class ActionStopEffect : ActionAnimation
// Fields:
//   private string NPFMOEOIEKM; // 0x48

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x334CAE0]
// ActionStopEffect$$.ctor @ RVA 0x334CAE0

void ActionStopEffect___ctor(ActionStopEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ActionAnimation___ctor((ActionAnimation_o *)__this,6,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0344cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x334CB18]
// ActionStopEffect$$DPGIIHOJJDE @ RVA 0x334CB18

void ActionStopEffect__DPGIIHOJJDE(ActionStopEffect_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x334CB38]
// ActionStopEffect$$KCHJCGEMCGE @ RVA 0x334CB38

System_String_o * ActionStopEffect__KCHJCGEMCGE(ActionStopEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x334CB40]
// ActionStopEffect$$HNIHOIAMDPC @ RVA 0x334CB40

void ActionStopEffect__HNIHOIAMDPC
               (ActionStopEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567a0c & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567a0c = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
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

