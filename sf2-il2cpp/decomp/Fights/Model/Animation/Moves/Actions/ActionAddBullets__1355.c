// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionAddBullets  (obfuscated HMKNNONIOGK)
// TypeDefIndex 1355
// Namespace: 
// public class ActionAddBullets : ActionAnimation
// Fields:
//   private JGPHHOLNCCB JBNGADJBDHB; // 0x44
//   private int JGFKHMMNJBA; // 0x48

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x316769C]
// ActionAddBullets$$.ctor @ RVA 0x316769C

void ActionAddBullets___ctor(ActionAddBullets_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ActionAnimation___ctor((ActionAnimation_o *)__this,8,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032676d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public int CNKOOLDMAGC()  [RVA 0x31676D4]
// ActionAddBullets$$CNKOOLDMAGC @ RVA 0x31676D4

int32_t ActionAddBullets__CNKOOLDMAGC(ActionAddBullets_o *__this,MethodInfo *method)

{
  return (__this->fields).JBNGADJBDHB;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x31676DC]
// ActionAddBullets$$DPGIIHOJJDE @ RVA 0x31676DC

void ActionAddBullets__DPGIIHOJJDE(ActionAddBullets_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31676FC]
// ActionAddBullets$$HNIHOIAMDPC @ RVA 0x31676FC

void ActionAddBullets__HNIHOIAMDPC
               (ActionAddBullets_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  
  if ((DAT_045668c9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_8775/*"MagicBullet"*/);
    FUN_01bab630(&StringLiteral_5582/*"ERROR: Unknown bulletType"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10807/*"RaidChargeBullet"*/);
    DAT_045668c9 = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,StringLiteral_8775/*"MagicBullet"*/,(MethodInfo *)0x0);
      if (bVar2) {
        *(undefined4 *)&(__this->fields).super.field_0x34 = 0;
      }
      else {
        bVar2 = System_String__op_Equality(a,StringLiteral_10807/*"RaidChargeBullet"*/,(MethodInfo *)0x0);
        if (bVar2) {
          *(undefined4 *)&(__this->fields).super.field_0x34 = 1;
        }
        else {
                    /* try { // try from 03267834 to 0336785b has its CatchHandler @ 03267ac0 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5582/*"ERROR: Unknown bulletType"*/,(MethodInfo *)0x0);
        }
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        uVar1 = *(uint *)&(__this->fields).super.field_0x34;
        (__this->fields).JBNGADJBDHB = iVar3;
                    /* try { // try from 03267890 to 033678b7 has its CatchHandler @ 03267abc */
        if (uVar1 < 2) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (GameUtils_TypeInfo->static_fields->OCCMHDBJPJM).fields,
                             (MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).JBNGADJBDHB = 0;
          }
        }
                    /* try { // try from 032678d0 to 033678d7 has its CatchHandler @ 03267aa4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032678e0 to 03367907 has its CatchHandler @ 03267ab4 */
  FUN_01bab8c8();
}


// ===== public JGPHHOLNCCB NHIFGIACGKA()  [RVA 0x31678E4]
// ActionAddBullets$$NHIFGIACGKA @ RVA 0x31678E4

int32_t ActionAddBullets__NHIFGIACGKA(ActionAddBullets_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields).super.field_0x34;
}

