// TypeDefIndex 2717
// Namespace: 
// public class JGHEMMGMLND
// Fields:
//   public readonly float MHJPFONADDM; // 0x10
//   public readonly float MEKAEJEAAGJ; // 0x14
//   public readonly CNDPAJOLKFN PBMIHHHBAFI; // 0x18
//   public readonly CNDPAJOLKFN BFBNMPMNABM; // 0x20
//   public readonly float ADOKPILEFJH; // 0x28
//   private readonly string DEKCPPOJFEH; // 0x30

// ===== public CapsuleRender PMLCIOCDHDM(Transform NCKFIGCBCPO)  [RVA 0x33DE0C8]
// JGHEMMGMLND$$PMLCIOCDHDM @ RVA 0x33DE0C8

Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *
JGHEMMGMLND__PMLCIOCDHDM
          (JGHEMMGMLND_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *pNVar1;
  JGHEMMGMLND_o **ppJVar2;
  UnityEngine_Transform_o *__this_01;
  System_String_o *name;
  
  if ((DAT_04567e81 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CapsuleRender>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04567e81 = 1;
  }
  name = (__this->fields).DEKCPPOJFEH;
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pNVar1 = (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<CapsuleRender>__),
     pNVar1 != (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *)0x0)) {
    ppJVar2 = &(pNVar1->fields).Base;
    *ppJVar2 = __this;
    thunk_FUN_01c20e04(ppJVar2,__this);
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, GEBHIBIEAJE AEAMAIHIFKL)  [RVA 0x33DE190]
// JGHEMMGMLND$$.ctor @ RVA 0x33DE190

void JGHEMMGMLND___ctor(JGHEMMGMLND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       GEBHIBIEAJE_o *AEAMAIHIFKL,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  CNDPAJOLKFN_o **ppCVar4;
  float fVar5;
  
  if ((DAT_04567e82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8849/*"Margin2"*/);
    FUN_01bab630(&StringLiteral_8848/*"Margin1"*/);
    FUN_01bab630(&StringLiteral_10793/*"Radius1"*/);
    DAT_04567e82 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    (__this->fields).DEKCPPOJFEH = pSVar1;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8848/*"Margin1"*/,(MethodInfo *)0x0);
      fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).MHJPFONADDM = fVar5;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8849/*"Margin2"*/,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        (__this->fields).MEKAEJEAAGJ = fVar5;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_10793/*"Radius1"*/,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields).ADOKPILEFJH = fVar5 + fVar5;
          if (AEAMAIHIFKL != (GEBHIBIEAJE_o *)0x0) {
            (__this->fields).PBMIHHHBAFI = (AEAMAIHIFKL->fields)._HMIPFMPCHII_k__BackingField;
            thunk_FUN_01c20e04();
            ppCVar4 = &(__this->fields).BFBNMPMNABM;
            *ppCVar4 = (AEAMAIHIFKL->fields)._MHGCPMPILGC_k__BackingField;
            thunk_FUN_01c20e04(ppCVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

