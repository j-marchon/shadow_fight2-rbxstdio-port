// TypeDefIndex 1945
// Namespace: 
// public class StrikeThroughTextLine.NLGMBKIAOPD
// Fields:
//   public int BGPIAJBHFEM; // 0x10
//   public int CFGIDIGNIOL; // 0x14
//   public Vector3 APGNFAIBBKD; // 0x18
//   public Vector3 CFFBIILFLIM; // 0x24
//   public float GNCALAHEPCG; // 0x30
//   public Color BANIDGFENDE; // 0x34
//   public float JCADKEJBGKM; // 0x44
//   public float DLHJBCEMKBN; // 0x48
//   private float <AAAAPMBNAFD>k__BackingField; // 0x4C

// ===== public float LEJACMOIBBE()  [RVA 0x3272694]
// Nekki.SF2.GUI.StrikeThroughTextLine.NLGMBKIAOPD$$LEJACMOIBBE @ RVA 0x3272694

float Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__LEJACMOIBBE
                (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this,MethodInfo *method)

{
  return (__this->fields)._AAAAPMBNAFD_k__BackingField;
}


// ===== private void ENFCFPKOPPI(float CJNHFNHJHPE)  [RVA 0x327269C]
// Nekki.SF2.GUI.StrikeThroughTextLine.NLGMBKIAOPD$$ENFCFPKOPPI @ RVA 0x327269C

void Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__ENFCFPKOPPI
               (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._AAAAPMBNAFD_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void LHPFLCMLFMF(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x3271C38]
// Nekki.SF2.GUI.StrikeThroughTextLine.NLGMBKIAOPD$$LHPFLCMLFMF @ RVA 0x3271C38

void Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__LHPFLCMLFMF
               (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  System_Collections_Generic_HashSet_char__o *PEBPAIJLMNO;
  System_Collections_Generic_HashSet_char__o *HAEKBBEMADA;
  System_Collections_Generic_HashSet_char__o *JDMDKJNLBBD;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *pNVar12;
  int32_t JDANDJGGFOI;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Bounds_o local_d8;
  UnityEngine_Bounds_o local_c0;
  UnityEngine_Bounds_o local_a8;
  UnityEngine_Vector3_Fields local_90;
  
  if ((DAT_04567232 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    DAT_04567232 = 1;
  }
  bVar4 = Util__KEJBDHBDGNI((__this->fields).DLHJBCEMKBN,1e-10,(MethodInfo *)0x0);
  bVar5 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  iVar6 = (__this->fields).BGPIAJBHFEM;
  JDANDJGGFOI = (__this->fields).CFGIDIGNIOL;
  pNVar12 = MMEECJEKHGB;
  if (!bVar5 || bVar4) {
    HAEKBBEMADA = (System_Collections_Generic_HashSet_char__o *)0x0;
    PEBPAIJLMNO = (System_Collections_Generic_HashSet_char__o *)0x0;
    JDMDKJNLBBD = (System_Collections_Generic_HashSet_char__o *)0x0;
  }
  else {
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03372038;
    pIVar9 = pIVar7->klass;
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar8 = pIVar9->vtable + (*piVar11 + 6);
          goto LAB_03371d74;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,DFLJPJMIMHI_TypeInfo,6);
LAB_03371d74:
    PEBPAIJLMNO = (System_Collections_Generic_HashSet_char__o *)
                  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    if (!bVar5 || bVar4) {
      HAEKBBEMADA = (System_Collections_Generic_HashSet_char__o *)0x0;
    }
    else {
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar7 == (Il2CppObject *)0x0) {
LAB_03372038:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar9 = pIVar7->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            pVVar8 = pIVar9->vtable + *piVar11;
            goto LAB_03371dec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,DFLJPJMIMHI_TypeInfo,0);
LAB_03371dec:
      HAEKBBEMADA = (System_Collections_Generic_HashSet_char__o *)
                    (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      if (bVar5 && !bVar4) {
        pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar9 = pIVar7->klass;
          uVar3._0_1_ = (pIVar9->_2).rank;
          uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                pVVar8 = pIVar9->vtable + (*piVar11 + 7);
                goto LAB_03371e74;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar7,DFLJPJMIMHI_TypeInfo,7);
LAB_03371e74:
          JDMDKJNLBBD = (System_Collections_Generic_HashSet_char__o *)
                        (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
          goto LAB_03371e84;
        }
        goto LAB_03372038;
      }
    }
    iVar6 = 0;
    JDANDJGGFOI = 0;
    JDMDKJNLBBD = (System_Collections_Generic_HashSet_char__o *)0x0;
    pNVar12 = (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0;
  }
LAB_03371e84:
  OMANDMDCGMF__MLCFOLPGDBO
            (&local_a8,pNVar12,iVar6,JDANDJGGFOI,PEBPAIJLMNO,HAEKBBEMADA,JDMDKJNLBBD,
             (MethodInfo *)0x0);
  local_90.z = local_a8.fields.m_Center.fields.z;
  local_90.x = local_a8.fields.m_Center.fields.x;
  local_90.y = local_a8.fields.m_Center.fields.y;
  local_c0.fields.m_Center.fields.x = local_a8.fields.m_Center.fields.x;
  local_c0.fields.m_Center.fields.y = local_a8.fields.m_Center.fields.y;
  local_c0.fields.m_Center.fields.z = local_a8.fields.m_Center.fields.z;
  local_c0.fields.m_Extents.fields.x = local_a8.fields.m_Extents.fields.x;
  local_c0.fields.m_Extents.fields.y = local_a8.fields.m_Extents.fields.y;
  local_c0.fields.m_Extents.fields.z = local_a8.fields.m_Extents.fields.z;
  UVar26 = OMANDMDCGMF__OIMANFCDDIJ(3,&local_c0,(MethodInfo *)0x0);
  (__this->fields).APGNFAIBBKD.fields.x = UVar26.fields.x;
  (__this->fields).APGNFAIBBKD.fields.y = UVar26.fields.y;
  (__this->fields).APGNFAIBBKD.fields.z = UVar26.fields.z;
  local_d8.fields.m_Extents.fields.x = local_a8.fields.m_Extents.fields.x;
  local_d8.fields.m_Extents.fields.y = local_a8.fields.m_Extents.fields.y;
  local_d8.fields.m_Center.fields.z = local_90.z;
  local_d8.fields.m_Center.fields.x = local_90.x;
  local_d8.fields.m_Center.fields.y = local_90.y;
  local_d8.fields.m_Extents.fields.z = local_a8.fields.m_Extents.fields.z;
  UVar26 = OMANDMDCGMF__OIMANFCDDIJ(5,&local_d8,(MethodInfo *)0x0);
  (__this->fields).CFFBIILFLIM.fields.z = UVar26.fields.z;
  fVar17 = 0.0;
  (__this->fields).CFFBIILFLIM.fields.x = UVar26.fields.x;
  (__this->fields).CFFBIILFLIM.fields.y = UVar26.fields.y;
  if (!bVar4) {
    fVar17 = (local_a8.fields.m_Extents.fields.y + local_a8.fields.m_Extents.fields.y) * 0.5 *
             (__this->fields).DLHJBCEMKBN;
  }
  (__this->fields)._AAAAPMBNAFD_k__BackingField = fVar17;
  uVar22 = (__this->fields).APGNFAIBBKD.fields.x;
  uVar24 = (__this->fields).APGNFAIBBKD.fields.y;
  fVar17 = (__this->fields).APGNFAIBBKD.fields.z;
  if (DAT_04560273 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04560273 = '\x01';
  }
  fVar23 = UVar26.fields.x - (float)uVar22;
  fVar25 = UVar26.fields.y - (float)uVar24;
  fVar17 = UVar26.fields.z - fVar17;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar14 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar17 * fVar17);
  iVar6 = OMANDMDCGMF__CLBEEDGBPKJ
                    (MMEECJEKHGB,(__this->fields).BGPIAJBHFEM,(__this->fields).CFGIDIGNIOL,
                     (MethodInfo *)0x0);
  uVar15 = (__this->fields).APGNFAIBBKD.fields.x;
  uVar16 = (__this->fields).APGNFAIBBKD.fields.y;
  fVar18 = (__this->fields).APGNFAIBBKD.fields.z;
  fVar13 = fVar14 / (float)iVar6;
  fVar19 = (__this->fields).JCADKEJBGKM;
  uVar20 = (__this->fields).CFFBIILFLIM.fields.x;
  uVar21 = (__this->fields).CFFBIILFLIM.fields.y;
  fVar23 = (fVar23 / fVar14) * fVar13 * fVar19;
  fVar25 = (fVar25 / fVar14) * fVar13 * fVar19;
  fVar19 = (fVar17 / fVar14) * fVar13 * fVar19;
  fVar17 = (__this->fields).CFFBIILFLIM.fields.z;
  (__this->fields).APGNFAIBBKD.fields.x = (float)uVar15 - fVar23;
  (__this->fields).APGNFAIBBKD.fields.y = (float)uVar16 - fVar25;
  (__this->fields).APGNFAIBBKD.fields.z = fVar18 - fVar19;
  (__this->fields).CFFBIILFLIM.fields.x = fVar23 + (float)uVar20;
  (__this->fields).CFFBIILFLIM.fields.y = fVar25 + (float)uVar21;
  (__this->fields).CFFBIILFLIM.fields.z = fVar19 + fVar17;
  return;
}


// ===== public StrikeThroughTextLine.NLGMBKIAOPD MOKLOIFMABD(int FEDCJPALCBN, int LCOKDKPMKIE)  [RVA 0x3271B98]
// Nekki.SF2.GUI.StrikeThroughTextLine.NLGMBKIAOPD$$MOKLOIFMABD @ RVA 0x3271B98

Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *
Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
          (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this,int32_t FEDCJPALCBN,
          int32_t LCOKDKPMKIE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this_00;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_04567233 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
    DAT_04567233 = 1;
  }
  fVar1 = (__this->fields).BANIDGFENDE.fields.g;
  fVar2 = (__this->fields).BANIDGFENDE.fields.b;
  fVar3 = (__this->fields).GNCALAHEPCG;
  fVar4 = (__this->fields).BANIDGFENDE.fields.r;
  uVar5 = *(undefined8 *)&(__this->fields).BANIDGFENDE.fields.a;
  fVar6 = (__this->fields).DLHJBCEMKBN;
  __this_00 = (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).BGPIAJBHFEM = FEDCJPALCBN;
  (__this_00->fields).CFGIDIGNIOL = LCOKDKPMKIE;
  *(undefined8 *)&(__this_00->fields).BANIDGFENDE.fields.a = uVar5;
  (__this_00->fields).DLHJBCEMKBN = fVar6;
  (__this_00->fields).BANIDGFENDE.fields.g = fVar1;
  (__this_00->fields).BANIDGFENDE.fields.b = fVar2;
  (__this_00->fields).GNCALAHEPCG = fVar3;
  (__this_00->fields).BANIDGFENDE.fields.r = fVar4;
  (__this_00->fields)._AAAAPMBNAFD_k__BackingField = 0.0;
  return __this_00;
}


// ===== public void .ctor(Color EFJKPCADGJH, int FEDCJPALCBN, int LCOKDKPMKIE, float BMIPOAFLAPO, float CEFMDHNDKHM, float OHMCEANEDFP)  [RVA 0x3272124]
// Nekki.SF2.GUI.StrikeThroughTextLine.NLGMBKIAOPD$$.ctor @ RVA 0x3272124

void Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD___ctor
               (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *__this,
               UnityEngine_Color_o EFJKPCADGJH,int32_t FEDCJPALCBN,int32_t LCOKDKPMKIE,
               float BMIPOAFLAPO,float CEFMDHNDKHM,float OHMCEANEDFP,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BANIDGFENDE.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).BANIDGFENDE.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).BGPIAJBHFEM = FEDCJPALCBN;
  (__this->fields).CFGIDIGNIOL = LCOKDKPMKIE;
  (__this->fields).GNCALAHEPCG = BMIPOAFLAPO;
  (__this->fields).BANIDGFENDE.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).BANIDGFENDE.fields.a = EFJKPCADGJH.fields.a;
  (__this->fields).JCADKEJBGKM = CEFMDHNDKHM;
  (__this->fields).DLHJBCEMKBN = OHMCEANEDFP;
  (__this->fields)._AAAAPMBNAFD_k__BackingField = 0.0;
  return;
}

