// TypeDefIndex 87
// Namespace: 
// public class NKPJLEMPIKD : HDBNGIBFEBA
// Fields:
//   private ObscuredInt JDNKKGPNHPB; // 0x20

// ===== public static List<NKPJLEMPIKD> EOHMFJFFFIN(XmlNode AHDGNOJPPIB, HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x2FFF28C]
// NKPJLEMPIKD$$EOHMFJFFFIN @ RVA 0x2FFF28C

/* WARNING: Removing unreachable block (ram,0x030ffb00) */

System_Collections_Generic_List_NKPJLEMPIKD__o *
NKPJLEMPIKD__EOHMFJFFFIN
          (System_Xml_XmlNode_o *AHDGNOJPPIB,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint32_t uVar4;
  int32_t iVar5;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_String_o *s;
  KJAKJNJODKL_o *__this_00;
  HEFOANCOHDC_o **ppHVar9;
  long lVar10;
  NKPJLEMPIKD_array *pNVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04565b1c & 1) == 0) {
    FUN_01bab630(&CMDDLMAPPMD_TypeInfo);
    FUN_01bab630(&EHCHALIPPEC_TypeInfo);
    FUN_01bab630(&HCKNPMDFGLJ_TypeInfo);
    FUN_01bab630(&IAGKPNAGKLA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IFAKAIOOHKJ_TypeInfo);
    FUN_01bab630(&KJAKJNJODKL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NKPJLEMPIKD>_TypeInfo);
    FUN_01bab630(&NKPJLEMPIKD_TypeInfo);
    FUN_01bab630(&NOGMFKIFAGJ_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_7630/*"IntervalEnd"*/);
    FUN_01bab630(&StringLiteral_7125/*"HitPreCrit"*/);
    FUN_01bab630(&StringLiteral_7632/*"IntervalStart"*/);
    FUN_01bab630(&StringLiteral_5999/*"EveryFrame"*/);
    FUN_01bab630(&StringLiteral_11440/*"RoundStageStart"*/);
    FUN_01bab630(&StringLiteral_3049/*"AreaEnter"*/);
    FUN_01bab630(&StringLiteral_3050/*"AreaExit"*/);
    FUN_01bab630(&StringLiteral_2974/*"AnimationEnd"*/);
    FUN_01bab630(&StringLiteral_2980/*"AnimationStart"*/);
    FUN_01bab630(&StringLiteral_7124/*"HitPostCrit"*/);
    FUN_01bab630(&StringLiteral_10220/*"PerkEventMagicCharged"*/);
    FUN_01bab630(&StringLiteral_10374/*"PostHit"*/);
    DAT_04565b1c = 1;
  }
  __this = (System_Collections_Generic_List_NKPJLEMPIKD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NKPJLEMPIKD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<NKPJLEMPIKD>__ctor__);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return __this;
  }
  plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_030ff4d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_030ff4d4:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
      if (plVar6 == (long *)0x0) {
        return __this;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_030ffa94;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_030ff534;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_030ff534:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar8);
    }
    s = (System_String_o *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    uVar4 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
    if (uVar4 < 0x5bfd1709) {
      if (uVar4 < 0x12ab1df3) {
        if (uVar4 == 0x71c7f61) {
          bVar3 = System_String__op_Equality(s,StringLiteral_5999/*"EveryFrame"*/,(MethodInfo *)0x0);
          if (!bVar3) goto LAB_030ff994;
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(CMDDLMAPPMD_TypeInfo);
          CMDDLMAPPMD___ctor((CMDDLMAPPMD_o *)__this_00,(MethodInfo *)0x0);
        }
        else if (uVar4 == 0xa8cee62) {
          bVar3 = System_String__op_Equality(s,StringLiteral_3049/*"AreaEnter"*/,(MethodInfo *)0x0);
          if (!bVar3) goto LAB_030ff994;
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
          IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this_00,(MethodInfo *)0x0);
        }
        else if ((uVar4 == 0x12ab1df2) &&
                (bVar3 = System_String__op_Equality(s,StringLiteral_10220/*"PerkEventMagicCharged"*/,(MethodInfo *)0x0), bVar3)
                ) {
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
          IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this_00,(MethodInfo *)0x0);
        }
        else {
LAB_030ff994:
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NKPJLEMPIKD_TypeInfo);
          HDBNGIBFEBA___ctor((HDBNGIBFEBA_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else if (uVar4 == 0x3f0ca91b) {
        bVar3 = System_String__op_Equality(s,StringLiteral_7125/*"HitPreCrit"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0x4a8f91e2) {
        bVar3 = System_String__op_Equality(s,StringLiteral_2974/*"AnimationEnd"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NOGMFKIFAGJ_TypeInfo);
        NOGMFKIFAGJ___ctor((NOGMFKIFAGJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0x5bfd1708) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_7124/*"HitPostCrit"*/,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 < 0xc556c0de) {
      if (uVar4 == 0x99808144) {
        bVar3 = System_String__op_Equality(s,StringLiteral_7632/*"IntervalStart"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(HCKNPMDFGLJ_TypeInfo);
        HCKNPMDFGLJ___ctor((HCKNPMDFGLJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0xc129aabd) {
        bVar3 = System_String__op_Equality(s,StringLiteral_9146/*"ModExpires"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IAGKPNAGKLA_TypeInfo);
        IAGKPNAGKLA___ctor((IAGKPNAGKLA_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0xc556c0dd) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_7630/*"IntervalEnd"*/,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(HCKNPMDFGLJ_TypeInfo);
        HCKNPMDFGLJ___ctor((HCKNPMDFGLJ_o *)__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 < 0xdc307a19) {
      if (uVar4 == 0xc67ade54) {
        bVar3 = System_String__op_Equality(s,StringLiteral_3050/*"AreaExit"*/,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
        IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0xdc307a18) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_10374/*"PostHit"*/,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 == 0xde7ac087) {
      bVar3 = System_String__op_Equality(s,StringLiteral_2980/*"AnimationStart"*/,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_030ff994;
      __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NOGMFKIFAGJ_TypeInfo);
      NOGMFKIFAGJ___ctor((NOGMFKIFAGJ_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((uVar4 != 0xf4fddefd) ||
         (bVar3 = System_String__op_Equality(s,StringLiteral_11440/*"RoundStageStart"*/,(MethodInfo *)0x0), !bVar3))
      goto LAB_030ff994;
      __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(EHCHALIPPEC_TypeInfo);
      EHCHALIPPEC___ctor((EHCHALIPPEC_o *)__this_00,(MethodInfo *)0x0);
    }
    if (__this_00 == (KJAKJNJODKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppHVar9 = &(__this_00->fields).super.super._MEFGNAIILBJ_k__BackingField;
    *ppHVar9 = EIKFGOCCOIE;
    thunk_FUN_01c20e04(ppHVar9,EIKFGOCCOIE);
    (*(((IFAKAIOOHKJ_c *)__this_00->klass)->vtable)._4_HNIHOIAMDPC.methodPtr)
              (__this_00,plVar8,(((IFAKAIOOHKJ_c *)__this_00->klass)->vtable)._4_HNIHOIAMDPC.method)
    ;
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this_00->fields).super.JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    lVar10 = Method_System_Collections_Generic_List<NKPJLEMPIKD>_Add__;
    if (iVar5 != 0) {
      if (__this == (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar11 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pNVar11 == (NKPJLEMPIKD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pNVar11->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pNVar11->m_Items[(int)uVar2] = (NKPJLEMPIKD_o *)__this_00;
        thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_030ffab0;
    }
  }
LAB_030ffa94:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_030ffab0:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x2FFFC84]
// NKPJLEMPIKD$$RandomizeObscuredVars @ RVA 0x2FFFC84

void NKPJLEMPIKD__RandomizeObscuredVars(NKPJLEMPIKD_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public NKPJLEMPIKD.FDGCEBFPIOP NHGGBEACKBD()  [RVA 0x2FFFC74]
// NKPJLEMPIKD$$NHGGBEACKBD @ RVA 0x2FFFC74

int32_t NKPJLEMPIKD__NHGGBEACKBD(NKPJLEMPIKD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static NKPJLEMPIKD FAOBHLCDKJI(NKPJLEMPIKD IFLBGAIJODP, HEFOANCOHDC EIKFGOCCOIE)  [RVA 0x2FFFC90]
// NKPJLEMPIKD$$FAOBHLCDKJI @ RVA 0x2FFFC90

NKPJLEMPIKD_o *
NKPJLEMPIKD__FAOBHLCDKJI(NKPJLEMPIKD_o *IFLBGAIJODP,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  KJAKJNJODKL_o *__this;
  HEFOANCOHDC_o **ppHVar3;
  MethodInfo *method_00;
  
  if ((DAT_04565b1d & 1) == 0) {
    FUN_01bab630(&CMDDLMAPPMD_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EHCHALIPPEC_TypeInfo);
    FUN_01bab630(&HCKNPMDFGLJ_TypeInfo);
    FUN_01bab630(&IAGKPNAGKLA_TypeInfo);
    FUN_01bab630(&IFAKAIOOHKJ_TypeInfo);
    FUN_01bab630(&KJAKJNJODKL_TypeInfo);
    FUN_01bab630(&NKPJLEMPIKD_TypeInfo);
    FUN_01bab630(&NOGMFKIFAGJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10219/*"PerkEvent.Clone PerkEvent type is EventType.EVENT_NONE"*/);
    DAT_04565b1d = 1;
  }
  if (IFLBGAIJODP == (NKPJLEMPIKD_o *)0x0) {
    __this = (KJAKJNJODKL_o *)0x0;
  }
  else {
    method_00 = (MethodInfo *)0x0;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (IFLBGAIJODP->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    switch(iVar2) {
    case 1:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(EHCHALIPPEC_TypeInfo);
      bVar1 = (EHCHALIPPEC_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)EHCHALIPPEC_TypeInfo)) {
LAB_03100004:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(IFLBGAIJODP);
      }
      EHCHALIPPEC___ctor((EHCHALIPPEC_o *)__this,(EHCHALIPPEC_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    case 2:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(CMDDLMAPPMD_TypeInfo);
      bVar1 = (CMDDLMAPPMD_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)CMDDLMAPPMD_TypeInfo)) goto LAB_03100004;
      CMDDLMAPPMD___ctor((CMDDLMAPPMD_o *)__this,(CMDDLMAPPMD_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    default:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NKPJLEMPIKD_TypeInfo);
      NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,IFLBGAIJODP,method_00);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10219/*"PerkEvent.Clone PerkEvent type is EventType.EVENT_NONE"*/,(MethodInfo *)0x0);
      break;
    case 5:
    case 6:
    case 7:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
      bVar1 = (KJAKJNJODKL_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)KJAKJNJODKL_TypeInfo)) goto LAB_03100004;
      KJAKJNJODKL___ctor(__this,(KJAKJNJODKL_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    case 8:
    case 0xf:
    case 0x10:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
      bVar1 = (IFAKAIOOHKJ_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)IFAKAIOOHKJ_TypeInfo)) goto LAB_03100004;
      IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this,(IFAKAIOOHKJ_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    case 9:
    case 10:
    case 0xb:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NOGMFKIFAGJ_TypeInfo);
      bVar1 = (NOGMFKIFAGJ_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)NOGMFKIFAGJ_TypeInfo)) goto LAB_03100004;
      NOGMFKIFAGJ___ctor((NOGMFKIFAGJ_o *)__this,(NOGMFKIFAGJ_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    case 0xc:
    case 0xd:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(HCKNPMDFGLJ_TypeInfo);
      bVar1 = (HCKNPMDFGLJ_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HCKNPMDFGLJ_TypeInfo)) goto LAB_03100004;
      HCKNPMDFGLJ___ctor((HCKNPMDFGLJ_o *)__this,(HCKNPMDFGLJ_o *)IFLBGAIJODP,(MethodInfo *)0x0);
      break;
    case 0xe:
      __this = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IAGKPNAGKLA_TypeInfo);
      bVar1 = (IAGKPNAGKLA_TypeInfo->_2).naturalAligment;
      if (((IFLBGAIJODP->klass->_2).naturalAligment < bVar1) ||
         ((IFLBGAIJODP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)IAGKPNAGKLA_TypeInfo)) goto LAB_03100004;
      IAGKPNAGKLA___ctor((IAGKPNAGKLA_o *)__this,(IAGKPNAGKLA_o *)IFLBGAIJODP,(MethodInfo *)0x0);
    }
    if (__this == (KJAKJNJODKL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppHVar3 = &(__this->fields).super.super._MEFGNAIILBJ_k__BackingField;
    *ppHVar3 = EIKFGOCCOIE;
    thunk_FUN_01c20e04(ppHVar3,EIKFGOCCOIE);
  }
  return (NKPJLEMPIKD_o *)__this;
}


// ===== public virtual bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x3000054]
// NKPJLEMPIKD$$EPBENPDCBFE @ RVA 0x3000054

bool NKPJLEMPIKD__EPBENPDCBFE
               (NKPJLEMPIKD_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).super.BEMCNJHEADJ;
  if (iVar1 == 2) {
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) goto LAB_031000c0;
    if ((PHCGJGCHKCM->fields).LHNJNJMBLJM == (PHCGJGCHKCM->fields).EMCFCMFGPME) {
      return false;
    }
  }
  else if (iVar1 == 1) {
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
LAB_031000c0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PHCGJGCHKCM->fields).LHNJNJMBLJM != (PHCGJGCHKCM->fields).EMCFCMFGPME) {
      return false;
    }
  }
  else if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) goto LAB_031000c0;
  iVar1 = (PHCGJGCHKCM->fields).BGHFADDGPAD;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1 == iVar2;
}


// ===== protected void GNLPNKGBAFL(NKPJLEMPIKD.FDGCEBFPIOP CJNHFNHJHPE)  [RVA 0x30000C4]
// NKPJLEMPIKD$$GNLPNKGBAFL @ RVA 0x30000C4

void NKPJLEMPIKD__GNLPNKGBAFL(NKPJLEMPIKD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30000E4]
// NKPJLEMPIKD$$HNIHOIAMDPC @ RVA 0x30000E4

void NKPJLEMPIKD__HNIHOIAMDPC
               (NKPJLEMPIKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t CJNHFNHJHPE;
  System_String_o *s;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  
  if ((DAT_04565b1e & 1) == 0) {
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_4507/*"Combo"*/);
    FUN_01bab630(&StringLiteral_12495/*"Style"*/);
    FUN_01bab630(&StringLiteral_7630/*"IntervalEnd"*/);
    FUN_01bab630(&StringLiteral_7125/*"HitPreCrit"*/);
    FUN_01bab630(&StringLiteral_7632/*"IntervalStart"*/);
    FUN_01bab630(&StringLiteral_5999/*"EveryFrame"*/);
    FUN_01bab630(&StringLiteral_11440/*"RoundStageStart"*/);
    FUN_01bab630(&StringLiteral_3049/*"AreaEnter"*/);
    FUN_01bab630(&StringLiteral_3050/*"AreaExit"*/);
    FUN_01bab630(&StringLiteral_2974/*"AnimationEnd"*/);
    FUN_01bab630(&StringLiteral_2980/*"AnimationStart"*/);
    FUN_01bab630(&StringLiteral_7124/*"HitPostCrit"*/);
    FUN_01bab630(&StringLiteral_2978/*"AnimationInterrupted"*/);
    FUN_01bab630(&StringLiteral_8778/*"MagicCharged"*/);
    FUN_01bab630(&StringLiteral_10374/*"PostHit"*/);
    DAT_04565b1e = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  s = (System_String_o *)
      (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar2 < 0x6d7c14fa) {
    if (uVar2 < 0x3f0ca91c) {
      if (uVar2 < 0xa8cee63) {
        if (uVar2 == 0x71c7f61) {
          bVar1 = System_String__op_Equality(s,StringLiteral_5999/*"EveryFrame"*/,(MethodInfo *)0x0);
          if (bVar1) {
            CJNHFNHJHPE = 2;
            goto LAB_031005ac;
          }
        }
        else if ((uVar2 == 0xa8cee62) &&
                (bVar1 = System_String__op_Equality(s,StringLiteral_3049/*"AreaEnter"*/,(MethodInfo *)0x0), bVar1))
        {
          CJNHFNHJHPE = 0xf;
          goto LAB_031005ac;
        }
      }
      else if (uVar2 == 0x3c20cdc4) {
        bVar1 = System_String__op_Equality(s,StringLiteral_8778/*"MagicCharged"*/,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 8;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x3f0ca91b) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_7125/*"HitPreCrit"*/,(MethodInfo *)0x0), bVar1)) {
        CJNHFNHJHPE = 5;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 < 0x5467ec77) {
      if (uVar2 == 0x4a8f91e2) {
        bVar1 = System_String__op_Equality(s,StringLiteral_2974/*"AnimationEnd"*/,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 10;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x5467ec76) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_12495/*"Style"*/,(MethodInfo *)0x0), bVar1))
      {
        CJNHFNHJHPE = 3;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 == 0x5bfd1708) {
      bVar1 = System_String__op_Equality(s,StringLiteral_7124/*"HitPostCrit"*/,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 6;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0x6d7c14f9) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_2978/*"AnimationInterrupted"*/,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 0xb;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 < 0xc556c0de) {
    if (uVar2 < 0x99808145) {
      if (uVar2 == 0x83cd7fa1) {
        bVar1 = System_String__op_Equality(s,StringLiteral_4507/*"Combo"*/,(MethodInfo *)0x0);
        if (bVar1) {
          CJNHFNHJHPE = 4;
          goto LAB_031005ac;
        }
      }
      else if ((uVar2 == 0x99808144) &&
              (bVar1 = System_String__op_Equality(s,StringLiteral_7632/*"IntervalStart"*/,(MethodInfo *)0x0), bVar1)) {
        CJNHFNHJHPE = 0xc;
        goto LAB_031005ac;
      }
    }
    else if (uVar2 == 0xc129aabd) {
      bVar1 = System_String__op_Equality(s,StringLiteral_9146/*"ModExpires"*/,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 0xe;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0xc556c0dd) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_7630/*"IntervalEnd"*/,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 0xd;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 < 0xdc307a19) {
    if (uVar2 == 0xc67ade54) {
      bVar1 = System_String__op_Equality(s,StringLiteral_3050/*"AreaExit"*/,(MethodInfo *)0x0);
      if (bVar1) {
        CJNHFNHJHPE = 0x10;
        goto LAB_031005ac;
      }
    }
    else if ((uVar2 == 0xdc307a18) &&
            (bVar1 = System_String__op_Equality(s,StringLiteral_10374/*"PostHit"*/,(MethodInfo *)0x0), bVar1)) {
      CJNHFNHJHPE = 7;
      goto LAB_031005ac;
    }
  }
  else if (uVar2 == 0xde7ac087) {
    bVar1 = System_String__op_Equality(s,StringLiteral_2980/*"AnimationStart"*/,(MethodInfo *)0x0);
    if (bVar1) {
      CJNHFNHJHPE = 9;
      goto LAB_031005ac;
    }
  }
  else if ((uVar2 == 0xf4fddefd) &&
          (bVar1 = System_String__op_Equality(s,StringLiteral_11440/*"RoundStageStart"*/,(MethodInfo *)0x0), bVar1)) {
    CJNHFNHJHPE = 1;
    goto LAB_031005ac;
  }
  CJNHFNHJHPE = 0;
LAB_031005ac:
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar3;
  return;
}


// ===== public void .ctor(NKPJLEMPIKD IBKIPBJJCPG)  [RVA 0x3000010]
// NKPJLEMPIKD$$.ctor @ RVA 0x3000010

void NKPJLEMPIKD___ctor(NKPJLEMPIKD_o *__this,NKPJLEMPIKD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  HDBNGIBFEBA___ctor((HDBNGIBFEBA_o *)__this,(HDBNGIBFEBA_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NKPJLEMPIKD_o *)0x0) {
    CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (IBKIPBJJCPG->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FFFC6C]
// NKPJLEMPIKD$$.ctor @ RVA 0x2FFFC6C

void NKPJLEMPIKD___ctor(NKPJLEMPIKD_o *__this,MethodInfo *method)

{
  HDBNGIBFEBA___ctor((HDBNGIBFEBA_o *)__this,(MethodInfo *)0x0);
  return;
}

