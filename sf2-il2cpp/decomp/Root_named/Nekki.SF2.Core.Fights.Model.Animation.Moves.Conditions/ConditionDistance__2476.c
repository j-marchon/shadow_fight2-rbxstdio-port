// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionDistance  (obfuscated EIEJHJLDGNH)
// TypeDefIndex 2476
// Namespace: 
// public class ConditionDistance : ConditionAnimation
// Fields:
//   public const float IMMPOFKKMEF = 1000000;
//   private float PEOMJHJICCM; // 0x28
//   private float GKBCJOEFFCP; // 0x2C
//   private ConditionDistance.JNKKMGIMLIA NMEBNDDAFLJ; // 0x30
//   private DistancePoint AHBMLEMJNLG; // 0x38
//   private DistancePoint LJIPNPBLONM; // 0x40

// ===== public void JBICKKIBGDI()  [RVA 0x3371CA8]
// ConditionDistance$$JBICKKIBGDI @ RVA 0x3371CA8

void ConditionDistance__JBICKKIBGDI(ConditionDistance_o *__this,MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  
  pPVar1 = (__this->fields).AHBMLEMJNLG;
  if (pPVar1 != (DistancePoint_o *)0x0) {
    DistancePoint__NODBBDLAIHD(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (__this->fields).LJIPNPBLONM;
    if (pPVar1 != (DistancePoint_o *)0x0) {
      DistancePoint__NODBBDLAIHD(pPVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3371CD8]
// ConditionDistance$$EPBENPDCBFE @ RVA 0x3371CD8

bool ConditionDistance__EPBENPDCBFE(ConditionDistance_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  DistancePoint_o *pPVar2;
  PKHLGDMJPMF_o *__this_00;
  PKHLGDMJPMF_o *__this_01;
  bool bVar3;
  float fVar4;
  float fVar5;
  ulong in_d1;
  ulong in_d2;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  UnityEngine_Vector3_o PHCOHKNFGLE_00;
  
  if ((DAT_04567b28 & 1) == 0) {
    FUN_01bab630(&PKHLGDMJPMF_TypeInfo);
    DAT_04567b28 = 1;
  }
  iVar1 = (__this->fields).NMEBNDDAFLJ;
  if (iVar1 == 2) {
    pPVar2 = (__this->fields).LJIPNPBLONM;
    if (pPVar2 != (DistancePoint_o *)0x0) {
      PHCOHKNFGLE.fields.x =
           (*(pPVar2->klass->vtable)._7_KILOIOEILFL.methodPtr)
                     (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._7_KILOIOEILFL.method);
      __this_00 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
      PHCOHKNFGLE.fields.y = (undefined4)in_d1;
      PHCOHKNFGLE.fields.z = (float)in_d2;
      in_d2 = in_d2 & 0xffffffff;
      in_d1 = in_d1 & 0xffffffff;
      PKHLGDMJPMF___ctor(__this_00,PHCOHKNFGLE,(MethodInfo *)0x0);
      pPVar2 = (__this->fields).AHBMLEMJNLG;
      if (pPVar2 != (DistancePoint_o *)0x0) {
        PHCOHKNFGLE_00.fields.x =
             (*(pPVar2->klass->vtable)._7_KILOIOEILFL.methodPtr)
                       (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._7_KILOIOEILFL.method);
        __this_01 = (PKHLGDMJPMF_o *)thunk_FUN_01bda818(PKHLGDMJPMF_TypeInfo);
        PHCOHKNFGLE_00.fields.y = (undefined4)in_d1;
        PHCOHKNFGLE_00.fields.z = (float)in_d2;
        PKHLGDMJPMF___ctor(__this_01,PHCOHKNFGLE_00,(MethodInfo *)0x0);
        fVar4 = PKHLGDMJPMF__PAMPGOGMIJN(__this_00,__this_01,(MethodInfo *)0x0);
        goto LAB_03471e58;
      }
    }
  }
  else if (iVar1 == 1) {
    pPVar2 = (__this->fields).LJIPNPBLONM;
    if (pPVar2 != (DistancePoint_o *)0x0) {
      fVar4 = (float)(*(pPVar2->klass->vtable)._6_LHPFGLOFHBL.methodPtr)
                               (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._6_LHPFGLOFHBL.method);
      pPVar2 = (__this->fields).AHBMLEMJNLG;
      if (pPVar2 != (DistancePoint_o *)0x0) {
        fVar5 = (float)(*(pPVar2->klass->vtable)._6_LHPFGLOFHBL.methodPtr)
                                 (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._6_LHPFGLOFHBL.method);
        fVar4 = fVar4 - fVar5;
        goto LAB_03471e58;
      }
    }
  }
  else {
    fVar4 = 0.0;
    if (iVar1 != 0) {
LAB_03471e58:
      if ((__this->fields).PEOMJHJICCM <= fVar4) {
        bVar3 = fVar4 <= (__this->fields).GKBCJOEFFCP;
      }
      else {
        bVar3 = false;
      }
      return (bool)(bVar3 ^ (__this->fields).super.GBBHFPBFOPI != false);
    }
    pPVar2 = (__this->fields).LJIPNPBLONM;
    if (pPVar2 != (DistancePoint_o *)0x0) {
      fVar4 = (float)(*(pPVar2->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                               (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._8_CJHJMGGINHP.method);
      pPVar2 = (__this->fields).AHBMLEMJNLG;
      if ((pPVar2 != (DistancePoint_o *)0x0) &&
         (fVar5 = (float)(*(pPVar2->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                                   (pPVar2,AHEFOIOKDOK,(pPVar2->klass->vtable)._8_CJHJMGGINHP.method
                                   ), AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0)) {
        fVar4 = (fVar4 - fVar5) * (float)(AHEFOIOKDOK->fields).FOJEHKCDKFH;
        goto LAB_03471e58;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KHKLLNFCMME(ModelObject NCNGALIAHJL, bool FOFCAILEKJD, ModelNode IIBPJLKGEBP, bool BHKCLMLKLNB, ModelObject CHBJNMMEAPG)  [RVA 0x3371EA4]
// ConditionDistance$$KHKLLNFCMME @ RVA 0x3371EA4

void ConditionDistance__KHKLLNFCMME
               (ConditionDistance_o *__this,ModelObject_o *NCNGALIAHJL,bool FOFCAILEKJD,
               ModelNode_o *IIBPJLKGEBP,bool BHKCLMLKLNB,ModelObject_o *CHBJNMMEAPG,
               MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  
  pPVar1 = (__this->fields).AHBMLEMJNLG;
  if (pPVar1 != (DistancePoint_o *)0x0) {
    DistancePoint__KEAKEIPABPP
              (pPVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,(MethodInfo *)0x0)
    ;
    pPVar1 = (__this->fields).LJIPNPBLONM;
    if (pPVar1 != (DistancePoint_o *)0x0) {
      DistancePoint__KEAKEIPABPP
                (pPVar1,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,CHBJNMMEAPG,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3371F1C]
// ConditionDistance$$.ctor @ RVA 0x3371F1C

void ConditionDistance___ctor(ConditionDistance_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  DistancePoint_o *pPVar3;
  DistancePoint_o **ppPVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  MGNDHCBAPEN_float__float__o *pMVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if ((DAT_04567b29 & 1) == 0) {
    FUN_01bab630(&DistancePoint_TypeInfo);
    FUN_01bab630(&StringLiteral_13833/*"To"*/);
    FUN_01bab630(&StringLiteral_6609/*"From"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_3270/*"Axis"*/);
    DAT_04567b29 = 1;
  }
  pPVar3 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
  DistancePoint___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).AHBMLEMJNLG;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  pPVar3 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
  DistancePoint___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).LJIPNPBLONM;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,2,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_3270/*"Axis"*/,(MethodInfo *)0x0);
      if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
        uVar8 = 2;
      }
      else {
        a = (System_String_o *)
            (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
        bVar2 = System_String__op_Equality(a,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
        uVar8 = ~(uint)bVar2 & 1;
      }
      (__this->fields).NMEBNDDAFLJ = uVar8;
      pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,-1e+06,1e+06,(MethodInfo *)0x0);
      if (pMVar6 != (MGNDHCBAPEN_float__float__o *)0x0) {
        fVar1 = (pMVar6->fields).DOKHHBGJICA;
        (__this->fields).PEOMJHJICCM = (pMVar6->fields).PHPELPFMOII;
        (__this->fields).GKBCJOEFFCP = fVar1;
        pPVar3 = (__this->fields).AHBMLEMJNLG;
        uVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                          (AHDGNOJPPIB,StringLiteral_6609/*"From"*/,
                           (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (pPVar3 != (DistancePoint_o *)0x0) {
          (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                    (pPVar3,uVar7,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
          pPVar3 = *ppPVar4;
          uVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_13833/*"To"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (pPVar3 != (DistancePoint_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034720f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                      (pPVar3,uVar7,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

