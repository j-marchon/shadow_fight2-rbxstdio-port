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
    FUN_01bab630(&StringLiteral_9146);
    FUN_01bab630(&StringLiteral_7630);
    FUN_01bab630(&StringLiteral_7125);
    FUN_01bab630(&StringLiteral_7632);
    FUN_01bab630(&StringLiteral_5999);
    FUN_01bab630(&StringLiteral_11440);
    FUN_01bab630(&StringLiteral_3049);
    FUN_01bab630(&StringLiteral_3050);
    FUN_01bab630(&StringLiteral_2974);
    FUN_01bab630(&StringLiteral_2980);
    FUN_01bab630(&StringLiteral_7124);
    FUN_01bab630(&StringLiteral_10220);
    FUN_01bab630(&StringLiteral_10374);
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
          bVar3 = System_String__op_Equality(s,StringLiteral_5999,(MethodInfo *)0x0);
          if (!bVar3) goto LAB_030ff994;
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(CMDDLMAPPMD_TypeInfo);
          CMDDLMAPPMD___ctor((CMDDLMAPPMD_o *)__this_00,(MethodInfo *)0x0);
        }
        else if (uVar4 == 0xa8cee62) {
          bVar3 = System_String__op_Equality(s,StringLiteral_3049,(MethodInfo *)0x0);
          if (!bVar3) goto LAB_030ff994;
          __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
          IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this_00,(MethodInfo *)0x0);
        }
        else if ((uVar4 == 0x12ab1df2) &&
                (bVar3 = System_String__op_Equality(s,StringLiteral_10220,(MethodInfo *)0x0), bVar3)
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
        bVar3 = System_String__op_Equality(s,StringLiteral_7125,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0x4a8f91e2) {
        bVar3 = System_String__op_Equality(s,StringLiteral_2974,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NOGMFKIFAGJ_TypeInfo);
        NOGMFKIFAGJ___ctor((NOGMFKIFAGJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0x5bfd1708) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_7124,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 < 0xc556c0de) {
      if (uVar4 == 0x99808144) {
        bVar3 = System_String__op_Equality(s,StringLiteral_7632,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(HCKNPMDFGLJ_TypeInfo);
        HCKNPMDFGLJ___ctor((HCKNPMDFGLJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else if (uVar4 == 0xc129aabd) {
        bVar3 = System_String__op_Equality(s,StringLiteral_9146,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IAGKPNAGKLA_TypeInfo);
        IAGKPNAGKLA___ctor((IAGKPNAGKLA_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0xc556c0dd) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_7630,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(HCKNPMDFGLJ_TypeInfo);
        HCKNPMDFGLJ___ctor((HCKNPMDFGLJ_o *)__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 < 0xdc307a19) {
      if (uVar4 == 0xc67ade54) {
        bVar3 = System_String__op_Equality(s,StringLiteral_3050,(MethodInfo *)0x0);
        if (!bVar3) goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(IFAKAIOOHKJ_TypeInfo);
        IFAKAIOOHKJ___ctor((IFAKAIOOHKJ_o *)__this_00,(MethodInfo *)0x0);
      }
      else {
        if ((uVar4 != 0xdc307a18) ||
           (bVar3 = System_String__op_Equality(s,StringLiteral_10374,(MethodInfo *)0x0), !bVar3))
        goto LAB_030ff994;
        __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(KJAKJNJODKL_TypeInfo);
        KJAKJNJODKL___ctor(__this_00,(MethodInfo *)0x0);
      }
    }
    else if (uVar4 == 0xde7ac087) {
      bVar3 = System_String__op_Equality(s,StringLiteral_2980,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_030ff994;
      __this_00 = (KJAKJNJODKL_o *)thunk_FUN_01bda818(NOGMFKIFAGJ_TypeInfo);
      NOGMFKIFAGJ___ctor((NOGMFKIFAGJ_o *)__this_00,(MethodInfo *)0x0);
    }
    else {
      if ((uVar4 != 0xf4fddefd) ||
         (bVar3 = System_String__op_Equality(s,StringLiteral_11440,(MethodInfo *)0x0), !bVar3))
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

