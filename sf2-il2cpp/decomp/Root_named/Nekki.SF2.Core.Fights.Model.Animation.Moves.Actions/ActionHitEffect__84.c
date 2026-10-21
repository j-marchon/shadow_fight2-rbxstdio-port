// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionHitEffect  (obfuscated JDIJBAPLFOK)
// TypeDefIndex 84
// Namespace: 
// public class ActionHitEffect : ActionAnimation
// Fields:
//   private string LEALNKKFNLH; // 0x48
//   public const string CGOINFNPIJJ = "Textures/Effects/Fight/";
//   private string CKLHLDKAKCD; // 0x50
//   private float KAFBIPKCHDE; // 0x58
//   private float BMFNFEOIGLA; // 0x5C

// ===== public string GLAICLJLIIH()  [RVA 0x2FFEF98]
// ActionHitEffect$$GLAICLJLIIH @ RVA 0x2FFEF98

System_String_o * ActionHitEffect__GLAICLJLIIH(ActionHitEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).LEALNKKFNLH;
}


// ===== public override void NCMDLPOGBPE()  [RVA 0x2FFEFA0]
// ActionHitEffect$$NCMDLPOGBPE @ RVA 0x2FFEFA0

void ActionHitEffect__NCMDLPOGBPE(ActionHitEffect_o *__this,MethodInfo *method)

{
  System_String_o *PHLFGGGHGAK;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b19 & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04565b19 = 1;
    method = extraout_x1;
  }
  PHLFGGGHGAK = ActionHitEffect__JEOMMIPAKPE(__this,method);
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
  }
  NGCBNMBJMOE__MMHFNAEHAKC(PHLFGGGHGAK,false,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x2FFF06C]
// ActionHitEffect$$HNIHOIAMDPC @ RVA 0x2FFF06C

void ActionHitEffect__HNIHOIAMDPC
               (ActionHitEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04565b1a & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6396/*"FileName"*/);
    FUN_01bab630(&StringLiteral_3155/*"AtlasPath"*/);
    FUN_01bab630(&StringLiteral_4254/*"ChangeHitEffectScale"*/);
    FUN_01bab630(&StringLiteral_12390/*"StartingRotation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b1a = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6396/*"FileName"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).LEALNKKFNLH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3155/*"AtlasPath"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields).CKLHLDKAKCD = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_12390/*"StartingRotation"*/,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).KAFBIPKCHDE = fVar4;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_4254/*"ChangeHitEffectScale"*/,(MethodInfo *)0x0);
            fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).BMFNFEOIGLA = fVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string JEOMMIPAKPE()  [RVA 0x2FFF00C]
// ActionHitEffect$$JEOMMIPAKPE @ RVA 0x2FFF00C

System_String_o * ActionHitEffect__JEOMMIPAKPE(ActionHitEffect_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04565b1b & 1) == 0) {
    FUN_01bab630(&StringLiteral_12912/*"Textures/Effects/Fight/"*/);
    DAT_04565b1b = 1;
  }
  ppSVar4 = &(__this->fields).CKLHLDKAKCD;
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar4,(MethodInfo *)0x0);
  ppSVar1 = (System_String_o **)&StringLiteral_12912/*"Textures/Effects/Fight/"*/;
  if (!bVar2) {
    ppSVar1 = ppSVar4;
  }
  pSVar3 = System_String__Concat(*ppSVar1,(__this->fields).LEALNKKFNLH,(MethodInfo *)0x0);
  return pSVar3;
}


// ===== public string IABAKOCLEPM()  [RVA 0x2FFF21C]
// ActionHitEffect$$IABAKOCLEPM @ RVA 0x2FFF21C

System_String_o * ActionHitEffect__IABAKOCLEPM(ActionHitEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).CKLHLDKAKCD;
}


// ===== public float IILDAFODINI()  [RVA 0x2FFF224]
// ActionHitEffect$$IILDAFODINI @ RVA 0x2FFF224

float ActionHitEffect__IILDAFODINI(ActionHitEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).BMFNFEOIGLA;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x2FFF22C]
// ActionHitEffect$$DPGIIHOJJDE @ RVA 0x2FFF22C

void ActionHitEffect__DPGIIHOJJDE(ActionHitEffect_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x2FFF24C]
// ActionHitEffect$$.ctor @ RVA 0x2FFF24C

void ActionHitEffect___ctor(ActionHitEffect_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ActionAnimation___ctor((ActionAnimation_o *)__this,10,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x030ff280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public float PDDHMCHGMIA()  [RVA 0x2FFF284]
// ActionHitEffect$$PDDHMCHGMIA @ RVA 0x2FFF284

float ActionHitEffect__PDDHMCHGMIA(ActionHitEffect_o *__this,MethodInfo *method)

{
  return (__this->fields).KAFBIPKCHDE;
}

