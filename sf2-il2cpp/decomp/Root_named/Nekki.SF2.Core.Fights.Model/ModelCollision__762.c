// Original name: Nekki.SF2.Core.Fights.Model.ModelCollision  (obfuscated MCIBPLJEFLJ)
// TypeDefIndex 762
// Namespace: 
// public class ModelCollision
// Fields:
//   private IntervalAnimation BOFNLBOBNKM; // 0x10
//   private object MKPKPODAGPH; // 0x18
//   private ModelObject HMIAFJALFCJ; // 0x20
//   private bool <FMOKINIOKBE>k__BackingField; // 0x28
//   public ModelCollision.KHCGONNHOMM HKFEABKNICO; // 0x30

// ===== public bool NHONNGBAAKM(object JOOCKFFLOPJ)  [RVA 0x304FDFC]
// ModelCollision$$NHONNGBAAKM @ RVA 0x304FDFC

bool ModelCollision__NHONNGBAAKM(ModelCollision_o *__this,Il2CppObject *JOOCKFFLOPJ,MethodInfo *method)

{
  return (__this->fields).MKPKPODAGPH == JOOCKFFLOPJ;
}


// ===== private bool BLDENPCGPNH(List<ModelEdge> OIMEJPNHBPN, ModelEdge FCKLNDFALPL)  [RVA 0x304FE0C]
// ModelCollision$$BLDENPCGPNH @ RVA 0x304FE0C

bool ModelCollision__BLDENPCGPNH
               (ModelCollision_o *__this,System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN,
               ModelEdge_o *FCKLNDFALPL,MethodInfo *method)

{
  Vector3f_o *PGDICFIFJCL;
  Vector3f_o *JOOCHALEIJC;
  int iVar1;
  bool bVar2;
  Vector3f_o *__this_00;
  MethodInfo *__this_01;
  ModelEdge_o *AKLJJMINIJG;
  MethodInfo *method_00;
  int iVar3;
  FDHJDNACICH_o *FHOGKFAGCJO;
  bool bVar4;
  float DFAGFABMFGL;
  float MHCCGPICFPH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  
  if ((DAT_04565e43 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Item__);
    DAT_04565e43 = 1;
  }
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (MethodInfo *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor((Vector3f_o *)__this_01,(MethodInfo *)0x0);
  if (FCKLNDFALPL != (ModelEdge_o *)0x0) {
    local_90.fakeValueActive = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.fakeValueActive;
    local_90.inited = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.inited;
    local_90._18_2_ = *(undefined2 *)&(FCKLNDFALPL->fields).MPJJBPFKHIB.fields.field_0x12;
    local_90.hiddenValueOldByte4.fields =
         (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
    local_90.fakeValue = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.fakeValue;
    local_90.currentCryptoKey = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.currentCryptoKey;
    local_90.hiddenValue = (FCKLNDFALPL->fields).MPJJBPFKHIB.fields.hiddenValue;
    DFAGFABMFGL = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                             (MethodInfo *)0x0);
    if (OIMEJPNHBPN != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
      iVar3 = (OIMEJPNHBPN->fields)._size;
      bVar4 = 0 < iVar3;
      if (0 < iVar3) {
        PGDICFIFJCL = (FCKLNDFALPL->fields)._NAHBLDEPFGM_k__BackingField;
        JOOCHALEIJC = (FCKLNDFALPL->fields)._AAEKIIKJBDK_k__BackingField;
        FHOGKFAGCJO = (FCKLNDFALPL->fields).CJCPGCGLDLK;
        iVar3 = 0;
        do {
          AKLJJMINIJG = (ModelEdge_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)OIMEJPNHBPN,iVar3,
                                   Method_System_Collections_Generic_List<ModelEdge>_get_Item__);
          if (AKLJJMINIJG == (ModelEdge_o *)0x0) goto LAB_0314ffb8;
          if ((AKLJJMINIJG->fields).HFFAIKOAFIK != false) {
            local_b0.fakeValueActive = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.fakeValueActive;
            local_b0.inited = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.inited;
            local_b0._18_2_ = *(undefined2 *)&(AKLJJMINIJG->fields).MPJJBPFKHIB.fields.field_0x12;
            local_b0.hiddenValueOldByte4.fields =
                 (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
            local_b0.fakeValue = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.fakeValue;
            local_b0.currentCryptoKey = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.currentCryptoKey;
            local_b0.hiddenValue = (AKLJJMINIJG->fields).MPJJBPFKHIB.fields.hiddenValue;
            MHCCGPICFPH = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,
                                     (MethodInfo *)0x0);
            method_00 = __this_01;
            bVar2 = PKHLGDMJPMF__MAINPDNFMCC
                              (PGDICFIFJCL,JOOCHALEIJC,DFAGFABMFGL,
                               (AKLJJMINIJG->fields)._NAHBLDEPFGM_k__BackingField,
                               (AKLJJMINIJG->fields)._AAEKIIKJBDK_k__BackingField,MHCCGPICFPH,
                               __this_00,(Vector3f_o *)__this_01,FHOGKFAGCJO,
                               (AKLJJMINIJG->fields).CJCPGCGLDLK,(MethodInfo *)0x0);
            if (bVar2) {
              ModelCollision__OADIPMFBEJP
                        (__this,FCKLNDFALPL,AKLJJMINIJG,__this_00,(Vector3f_o *)__this_01,
                         method_00);
              return bVar4;
            }
          }
          iVar1 = (OIMEJPNHBPN->fields)._size;
          iVar3 = iVar3 + 1;
          bVar4 = iVar3 < iVar1;
        } while (iVar3 < iVar1);
      }
      return bVar4;
    }
  }
LAB_0314ffb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BDOMLLIHEBH()  [RVA 0x3050044]
// ModelCollision$$BDOMLLIHEBH @ RVA 0x3050044

bool ModelCollision__BDOMLLIHEBH(ModelCollision_o *__this,MethodInfo *method)

{
  return (__this->fields)._FMOKINIOKBE_k__BackingField;
}


// ===== private static bool JPEDFFKLLFC(float OHIILDIGEIF, float DAHHDNFLMJO, FDHJDNACICH NFNEMDPDIDP, Vector3f EKEMKOCPHPO, Vector3f DHDPEBOFPPN, Vector3f CKCOLJLFJDB, Vector3f DEDNHOELFOD)  [RVA 0x305004C]
// ModelCollision$$JPEDFFKLLFC @ RVA 0x305004C

bool ModelCollision__JPEDFFKLLFC
               (float OHIILDIGEIF,float DAHHDNFLMJO,FDHJDNACICH_o *NFNEMDPDIDP,
               Vector3f_o *EKEMKOCPHPO,Vector3f_o *DHDPEBOFPPN,Vector3f_o *CKCOLJLFJDB,
               Vector3f_o *DEDNHOELFOD,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAHHDNFLMJO <= OHIILDIGEIF) {
LAB_03150140:
    bVar1 = false;
  }
  else {
    if (((EKEMKOCPHPO == (Vector3f_o *)0x0) || (NFNEMDPDIDP == (FDHJDNACICH_o *)0x0)) ||
       (DHDPEBOFPPN == (Vector3f_o *)0x0)) {
LAB_03150154:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB -
            (NFNEMDPDIDP->fields).FMPJLBLNHMC * OHIILDIGEIF;
    (DHDPEBOFPPN->fields).super.OHHDBINAJCB = fVar6;
    fVar4 = (EKEMKOCPHPO->fields).super.JOLEIODMLFL -
            (NFNEMDPDIDP->fields).IHEPHBIPLPM * OHIILDIGEIF;
    (DHDPEBOFPPN->fields).super.JOLEIODMLFL = fVar4;
    if (CKCOLJLFJDB == (Vector3f_o *)0x0) goto LAB_03150154;
    fVar2 = (CKCOLJLFJDB->fields).super.OHHDBINAJCB;
    if (fVar6 <= fVar2) {
      if (DEDNHOELFOD == (Vector3f_o *)0x0) goto LAB_03150154;
      fVar3 = (DEDNHOELFOD->fields).super.OHHDBINAJCB;
      if (fVar6 < fVar3) goto LAB_031500b4;
LAB_031500c8:
      fVar6 = (CKCOLJLFJDB->fields).super.JOLEIODMLFL;
      if (((fVar6 < fVar4) || (fVar4 < (DEDNHOELFOD->fields).super.JOLEIODMLFL)) &&
         ((fVar4 < fVar6 || ((DEDNHOELFOD->fields).super.JOLEIODMLFL < fVar4)))) goto LAB_031500fc;
    }
    else {
      if (DEDNHOELFOD == (Vector3f_o *)0x0) goto LAB_03150154;
LAB_031500b4:
      fVar3 = (DEDNHOELFOD->fields).super.OHHDBINAJCB;
      if ((fVar2 <= fVar6) && (fVar6 <= fVar3)) goto LAB_031500c8;
      fVar6 = (CKCOLJLFJDB->fields).super.JOLEIODMLFL;
LAB_031500fc:
      fVar5 = (EKEMKOCPHPO->fields).super.OHHDBINAJCB;
      fVar4 = (EKEMKOCPHPO->fields).super.JOLEIODMLFL;
      fVar2 = fVar5 - fVar2;
      fVar6 = fVar4 - fVar6;
      if ((DAHHDNFLMJO * DAHHDNFLMJO < fVar2 * fVar2 + fVar6 * fVar6) &&
         (fVar5 = fVar5 - fVar3, fVar4 = fVar4 - (DEDNHOELFOD->fields).super.JOLEIODMLFL,
         DAHHDNFLMJO * DAHHDNFLMJO < fVar5 * fVar5 + fVar4 * fVar4)) goto LAB_03150140;
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== public void JIPLNFLDADF(bool CJNHFNHJHPE)  [RVA 0x3050158]
// ModelCollision$$JIPLNFLDADF @ RVA 0x3050158

void ModelCollision__JIPLNFLDADF(ModelCollision_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FMOKINIOKBE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool BDHAMOEKNNK(ModelObject JALKELIHLPC, List<ModelEdge> APHLCBPKMEP, object JOOCKFFLOPJ)  [RVA 0x3050164]
// ModelCollision$$BDHAMOEKNNK @ RVA 0x3050164

bool ModelCollision__BDHAMOEKNNK
               (ModelCollision_o *__this,ModelObject_o *JALKELIHLPC,
               System_Collections_Generic_List_GEBHIBIEAJE__o *APHLCBPKMEP,Il2CppObject *JOOCKFFLOPJ
               ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN;
  ModelEdge_o *FCKLNDFALPL;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  int index;
  
  method_00 = (MethodInfo *)JOOCKFFLOPJ;
  if ((DAT_04565e44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Item__);
    DAT_04565e44 = 1;
  }
  if (((__this->fields)._FMOKINIOKBE_k__BackingField == false) ||
     ((__this->fields).MKPKPODAGPH != JOOCKFFLOPJ)) {
    if ((JALKELIHLPC == (ModelObject_o *)0x0) ||
       (OIMEJPNHBPN = ModelObject__EKHACIPBPAP(JALKELIHLPC,(MethodInfo *)0x0),
       APHLCBPKMEP == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (APHLCBPKMEP->fields)._size) {
      index = 0;
      do {
        FCKLNDFALPL = (ModelEdge_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)APHLCBPKMEP,index,
                                 Method_System_Collections_Generic_List<ModelEdge>_get_Item__);
        bVar1 = ModelCollision__BLDENPCGPNH(__this,OIMEJPNHBPN,FCKLNDFALPL,method_00);
        if (bVar1) {
          ppIVar2 = &(__this->fields).MKPKPODAGPH;
          *ppIVar2 = JOOCKFFLOPJ;
          thunk_FUN_01c20e04(ppIVar2,JOOCKFFLOPJ);
          return true;
        }
        index = index + 1;
      } while (index < (APHLCBPKMEP->fields)._size);
    }
  }
  return false;
}


// ===== public bool BDHAMOEKNNK(ModelObject JALKELIHLPC, List<ModelEdge> APHLCBPKMEP, IntervalAnimation HGHDNFCKJFL)  [RVA 0x305025C]
// ModelCollision$$BDHAMOEKNNK @ RVA 0x305025C

bool ModelCollision__BDHAMOEKNNK
               (ModelCollision_o *__this,ModelObject_o *JALKELIHLPC,
               System_Collections_Generic_List_GEBHIBIEAJE__o *APHLCBPKMEP,
               IntervalAnimation_o *HGHDNFCKJFL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN;
  ModelEdge_o *FCKLNDFALPL;
  ModelCollision_KHCGONNHOMM_o *pMVar3;
  ModelEdge_o **ppGVar4;
  ModelCollision_KHCGONNHOMM_Fields *pMVar5;
  Vector3f_o *pCVar6;
  IntervalAnimation_o *method_00;
  ModelCollision_Fields *pMVar7;
  int index;
  
  method_00 = HGHDNFCKJFL;
  if ((DAT_04565e45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>_get_Item__);
    FUN_01bab630(&IntervalAttack_TypeInfo);
    DAT_04565e45 = 1;
  }
  pMVar7 = &__this->fields;
  if (pMVar7->BOFNLBOBNKM != HGHDNFCKJFL) {
    if (HGHDNFCKJFL != (IntervalAnimation_o *)0x0) {
      bVar1 = (IntervalAttack_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (HGHDNFCKJFL->klass->_2).naturalAligment) &&
         ((HGHDNFCKJFL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)IntervalAttack_TypeInfo)) {
        if ((char)HGHDNFCKJFL[1].fields._NNEIIMCKKNF_k__BackingField.fields.fakeValue == '\0') {
          (__this->fields).BOFNLBOBNKM = HGHDNFCKJFL;
          thunk_FUN_01c20e04(pMVar7,HGHDNFCKJFL);
          pMVar3 = (__this->fields).HKFEABKNICO;
          if (pMVar3 != (ModelCollision_KHCGONNHOMM_o *)0x0) {
            ppGVar4 = &(pMVar3->fields).GBPPPKHOPEA;
            *ppGVar4 = (ModelEdge_o *)0x0;
            thunk_FUN_01c20e04(ppGVar4,0);
            pMVar3 = (__this->fields).HKFEABKNICO;
            if (pMVar3 != (ModelCollision_KHCGONNHOMM_o *)0x0) {
              pMVar5 = &pMVar3->fields;
              pMVar5->POPNNGCHBML = (ModelEdge_o *)0x0;
              thunk_FUN_01c20e04(pMVar5,0);
              pMVar3 = (__this->fields).HKFEABKNICO;
              if ((pMVar3 != (ModelCollision_KHCGONNHOMM_o *)0x0) &&
                 (pCVar6 = (pMVar3->fields).BPILADHMHBB, pCVar6 != (Vector3f_o *)0x0)) {
                Vector3f__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
                pMVar3 = (__this->fields).HKFEABKNICO;
                if ((pMVar3 != (ModelCollision_KHCGONNHOMM_o *)0x0) &&
                   (pCVar6 = (pMVar3->fields).HNNCKGOBKLK, pCVar6 != (Vector3f_o *)0x0)) {
                  Vector3f__DGLJCGNHLIG(pCVar6,(MethodInfo *)0x0);
                  return true;
                }
              }
            }
          }
        }
        else if ((JALKELIHLPC != (ModelObject_o *)0x0) &&
                (OIMEJPNHBPN = ModelObject__EKHACIPBPAP(JALKELIHLPC,(MethodInfo *)0x0),
                APHLCBPKMEP != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
          if ((APHLCBPKMEP->fields)._size < 1) {
            return false;
          }
          index = 0;
          do {
            FCKLNDFALPL = (ModelEdge_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)APHLCBPKMEP,index,
                                     Method_System_Collections_Generic_List<ModelEdge>_get_Item__)
            ;
            bVar2 = ModelCollision__BLDENPCGPNH(__this,OIMEJPNHBPN,FCKLNDFALPL,(MethodInfo *)method_00)
            ;
            if (bVar2) {
              pMVar7->BOFNLBOBNKM = HGHDNFCKJFL;
              thunk_FUN_01c20e04(pMVar7,HGHDNFCKJFL);
              return true;
            }
            index = index + 1;
          } while (index < (APHLCBPKMEP->fields)._size);
          return false;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public void MDPNACCPECM()  [RVA 0x3050408]
// ModelCollision$$MDPNACCPECM @ RVA 0x3050408

void ModelCollision__MDPNACCPECM(ModelCollision_o *__this,MethodInfo *method)

{
  (__this->fields).BOFNLBOBNKM = (IntervalAnimation_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  return;
}


// ===== public object GLFLFOKFJBM()  [RVA 0x3050414]
// ModelCollision$$GLFLFOKFJBM @ RVA 0x3050414

Il2CppObject * ModelCollision__GLFLFOKFJBM(ModelCollision_o *__this,MethodInfo *method)

{
  return (__this->fields).MKPKPODAGPH;
}


// ===== private void OADIPMFBEJP(ModelEdge FCKLNDFALPL, ModelEdge AKLJJMINIJG, Vector3f EKEMKOCPHPO, Vector3f CLBGPHAMDBH)  [RVA 0x304FFBC]
// ModelCollision$$OADIPMFBEJP @ RVA 0x304FFBC

void ModelCollision__OADIPMFBEJP
               (ModelCollision_o *__this,ModelEdge_o *FCKLNDFALPL,ModelEdge_o *AKLJJMINIJG,
               Vector3f_o *EKEMKOCPHPO,Vector3f_o *CLBGPHAMDBH,MethodInfo *method)

{
  ModelCollision_KHCGONNHOMM_o *pMVar1;
  ModelCollision_KHCGONNHOMM_Fields *pMVar2;
  Vector3f_o *pCVar3;
  
  pMVar1 = (__this->fields).HKFEABKNICO;
  if (pMVar1 != (ModelCollision_KHCGONNHOMM_o *)0x0) {
    (pMVar1->fields).GBPPPKHOPEA = FCKLNDFALPL;
    thunk_FUN_01c20e04();
    pMVar1 = (__this->fields).HKFEABKNICO;
    if (pMVar1 != (ModelCollision_KHCGONNHOMM_o *)0x0) {
      pMVar2 = &pMVar1->fields;
      pMVar2->POPNNGCHBML = AKLJJMINIJG;
      thunk_FUN_01c20e04(pMVar2,AKLJJMINIJG);
      pMVar1 = (__this->fields).HKFEABKNICO;
      if ((pMVar1 != (ModelCollision_KHCGONNHOMM_o *)0x0) &&
         (pCVar3 = (pMVar1->fields).BPILADHMHBB, pCVar3 != (Vector3f_o *)0x0)) {
        Vector3f__FOOHBJNHOKK(pCVar3,EKEMKOCPHPO,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).HKFEABKNICO;
        if ((pMVar1 != (ModelCollision_KHCGONNHOMM_o *)0x0) &&
           (pCVar3 = (pMVar1->fields).HNNCKGOBKLK, pCVar3 != (Vector3f_o *)0x0)) {
          Vector3f__FOOHBJNHOKK(pCVar3,CLBGPHAMDBH,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(ModelObject BCKBBGCOMJD)  [RVA 0x3050454]
// ModelCollision$$.ctor @ RVA 0x3050454

void ModelCollision___ctor(ModelCollision_o *__this,ModelObject_o *BCKBBGCOMJD,MethodInfo *method)

{
  ModelCollision_KHCGONNHOMM_o *__this_00;
  ModelCollision_KHCGONNHOMM_o **ppMVar1;
  ModelObject_o **ppGVar2;
  Il2CppObject **ppIVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04565e46 & 1) == 0) {
    FUN_01bab630(&ModelCollision_KHCGONNHOMM_TypeInfo);
    DAT_04565e46 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  auVar4 = thunk_FUN_01bda818(ModelCollision_KHCGONNHOMM_TypeInfo);
  __this_00 = auVar4._0_8_;
  ModelCollision_KHCGONNHOMM___ctor(__this_00,auVar4._8_8_);
  ppMVar1 = &(__this->fields).HKFEABKNICO;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  ppGVar2 = &(__this->fields).HMIAFJALFCJ;
  *ppGVar2 = BCKBBGCOMJD;
  thunk_FUN_01c20e04(ppGVar2,BCKBBGCOMJD);
  ppIVar3 = &(__this->fields).MKPKPODAGPH;
  *ppIVar3 = (Il2CppObject *)0x0;
  thunk_FUN_01c20e04(ppIVar3,0);
  (__this->fields).BOFNLBOBNKM = (IntervalAnimation_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  (__this->fields)._FMOKINIOKBE_k__BackingField = true;
  return;
}


// ===== public bool EELDALBEDHF(ModelObject JALKELIHLPC, ModelEdge PGHNHNDHEPF)  [RVA 0x3050594]
// ModelCollision$$EELDALBEDHF @ RVA 0x3050594

bool ModelCollision__EELDALBEDHF
               (ModelCollision_o *__this,ModelObject_o *JALKELIHLPC,ModelEdge_o *PGHNHNDHEPF,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN;
  
  if (JALKELIHLPC != (ModelObject_o *)0x0) {
    OIMEJPNHBPN = ModelObject__EKHACIPBPAP(JALKELIHLPC,(MethodInfo *)0x0);
    bVar1 = ModelCollision__BLDENPCGPNH(__this,OIMEJPNHBPN,PGHNHNDHEPF,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HINGLOIAMHJ()  [RVA 0x30505D0]
// ModelCollision$$HINGLOIAMHJ @ RVA 0x30505D0

void ModelCollision__HINGLOIAMHJ(ModelCollision_o *__this,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  
  ppIVar1 = &(__this->fields).MKPKPODAGPH;
  *ppIVar1 = (Il2CppObject *)0x0;
  thunk_FUN_01c20e04(ppIVar1,0);
  return;
}


// ===== public void DALAEJJEEKD(object CJNHFNHJHPE)  [RVA 0x30505DC]
// ModelCollision$$DALAEJJEEKD @ RVA 0x30505DC

void ModelCollision__DALAEJJEEKD(ModelCollision_o *__this,Il2CppObject *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MKPKPODAGPH = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

