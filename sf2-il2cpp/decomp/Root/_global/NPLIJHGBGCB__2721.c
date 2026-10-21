// TypeDefIndex 2721
// Namespace: 
// [Extension]
// public static class NPLIJHGBGCB
// Fields:

// ===== public static float KGIEELEGDJM(Scalar OOGPLJBADCD, float NGFCPILIEFN = 0)  [RVA 0x33DE2FC]
// NPLIJHGBGCB$$KGIEELEGDJM @ RVA 0x33DE2FC

float NPLIJHGBGCB__KGIEELEGDJM
                (Nekki_Yaml_Scalar_o *OOGPLJBADCD,float NGFCPILIEFN,MethodInfo *method)

{
  System_String_o *s;
  float fVar1;
  
  if (OOGPLJBADCD != (Nekki_Yaml_Scalar_o *)0x0) {
    s = Nekki_Yaml_Scalar__get_text(OOGPLJBADCD,(MethodInfo *)0x0);
    fVar1 = System_Single__Parse(s,(MethodInfo *)0x0);
    return fVar1;
  }
  return NGFCPILIEFN;
}


// ===== public static YamlDocumentNekki FANLDDCDDPB(string EIJDDKJONFO, string ILENGCADNIH = "", NPLIJHGBGCB.KJJHJABGFMH HIEHLGHMJDO = 0)  [RVA 0x33DE31C]
// NPLIJHGBGCB$$FANLDDCDDPB @ RVA 0x33DE31C

Nekki_Yaml_YamlDocumentNekki_o *
NPLIJHGBGCB__FANLDDCDDPB
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t HIEHLGHMJDO,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  Nekki_Yaml_YamlDocumentNekki_o *pNVar3;
  
  if ((DAT_04567e83 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e83 = 1;
  }
  bVar1 = System_String__op_Inequality(ILENGCADNIH,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1/*""*/;
  if (bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_1492/*"/"*/,ILENGCADNIH,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
  if (HIEHLGHMJDO == 2) {
    value = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (HIEHLGHMJDO == 1) {
    value = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else {
    value = StringLiteral_1/*""*/;
    if (HIEHLGHMJDO == 0) {
      value = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
    }
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar3 = Nekki_Yaml_YamlDocumentNekki__OACALLIJLDC(value,(MethodInfo *)0x0);
    return pNVar3;
  }
  return (Nekki_Yaml_YamlDocumentNekki_o *)0x0;
}


// ===== public static Node IPDOAJLIGOH(Mapping JHMENEKPIBO, string AFKICLAFDKC)  [RVA 0x33DE42C]
// NPLIJHGBGCB$$IPDOAJLIGOH @ RVA 0x33DE42C

/* WARNING: Removing unreachable block (ram,0x034de65c) */

Nekki_Yaml_Node_o *
NPLIJHGBGCB__IPDOAJLIGOH
          (Nekki_Yaml_Mapping_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_Yaml_Node_o *pNVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567e84 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Node_TypeInfo);
    DAT_04567e84 = 1;
  }
  if (JHMENEKPIBO == (Nekki_Yaml_Mapping_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034de4fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034de4fc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      pNVar5 = (Nekki_Yaml_Node_o *)0x0;
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_034de55c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034de55c:
    pNVar5 = (Nekki_Yaml_Node_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (pNVar5 == (Nekki_Yaml_Node_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_Yaml_Node_TypeInfo->_2).naturalAligment;
    if (((pNVar5->klass->_2).naturalAligment < bVar1) ||
       ((pNVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_Yaml_Node_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pNVar5);
    }
    bVar2 = System_String__op_Equality
                      ((pNVar5->fields)._key_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar2);
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034de620;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034de620:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return pNVar5;
}


// ===== public static bool CNOJEMHIJEJ(Scalar OOGPLJBADCD, bool NGFCPILIEFN = False)  [RVA 0x33DE728]
// NPLIJHGBGCB$$CNOJEMHIJEJ @ RVA 0x33DE728

bool NPLIJHGBGCB__CNOJEMHIJEJ(Nekki_Yaml_Scalar_o *OOGPLJBADCD,bool NGFCPILIEFN,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *s;
  
  if (OOGPLJBADCD != (Nekki_Yaml_Scalar_o *)0x0) {
    s = Nekki_Yaml_Scalar__get_text(OOGPLJBADCD,(MethodInfo *)0x0);
    iVar1 = System_Int32__Parse(s,(MethodInfo *)0x0);
    NGFCPILIEFN = iVar1 == 1;
  }
  return NGFCPILIEFN;
}


// ===== public static bool GABHDFHIGAO(Node JHMENEKPIBO)  [RVA 0x33DE754]
// NPLIJHGBGCB$$GABHDFHIGAO @ RVA 0x33DE754

bool NPLIJHGBGCB__GABHDFHIGAO(Nekki_Yaml_Node_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
  if ((DAT_04567e85 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_11711/*"Scalar"*/);
    DAT_04567e85 = 1;
  }
  if (JHMENEKPIBO != (Nekki_Yaml_Node_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((JHMENEKPIBO->fields)._typeNode_k__BackingField,StringLiteral_11711/*"Scalar"*/,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static bool DKCLCINLNEP(Node JHMENEKPIBO)  [RVA 0x33DE7A8]
// NPLIJHGBGCB$$DKCLCINLNEP @ RVA 0x33DE7A8

bool NPLIJHGBGCB__DKCLCINLNEP(Nekki_Yaml_Node_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
  if ((DAT_04567e86 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_11820/*"Sequence"*/);
    DAT_04567e86 = 1;
  }
  if (JHMENEKPIBO != (Nekki_Yaml_Node_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((JHMENEKPIBO->fields)._typeNode_k__BackingField,StringLiteral_11820/*"Sequence"*/,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static bool BIALACBFBPI(Node JHMENEKPIBO)  [RVA 0x33DE7FC]
// NPLIJHGBGCB$$BIALACBFBPI @ RVA 0x33DE7FC

bool NPLIJHGBGCB__BIALACBFBPI(Nekki_Yaml_Node_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = JHMENEKPIBO;
  if ((DAT_04567e87 & 1) == 0) {
    auVar2 = FUN_01bab630(&StringLiteral_8836/*"Mapping"*/);
    DAT_04567e87 = 1;
  }
  if (JHMENEKPIBO != (Nekki_Yaml_Node_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((JHMENEKPIBO->fields)._typeNode_k__BackingField,StringLiteral_8836/*"Mapping"*/,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static bool KMICEIPMMCO(string EIJDDKJONFO)  [RVA 0x33DE850]
// NPLIJHGBGCB$$KMICEIPMMCO @ RVA 0x33DE850

bool NPLIJHGBGCB__KMICEIPMMCO(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  if ((DAT_04567e88 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e88 = 1;
  }
  NPLIJHGBGCB__MPDLFPNJNED(EIJDDKJONFO,StringLiteral_1/*""*/,2,in_x3);
  return true;
}


// ===== public static YamlDocumentNekki MPDLFPNJNED(TextAsset AJGCEEJIMEM)  [RVA 0x33DEAE8]
// NPLIJHGBGCB$$MPDLFPNJNED @ RVA 0x33DEAE8

Nekki_Yaml_YamlDocumentNekki_o *
NPLIJHGBGCB__MPDLFPNJNED(UnityEngine_TextAsset_o *AJGCEEJIMEM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AFFECAIGLCG;
  Nekki_Yaml_YamlDocumentNekki_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e89 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)AJGCEEJIMEM,(MethodInfo *)0x0);
  AFFECAIGLCG = StringLiteral_1/*""*/;
  if (bVar1) {
    if (AJGCEEJIMEM == (UnityEngine_TextAsset_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    AFFECAIGLCG = UnityEngine_TextAsset__get_text(AJGCEEJIMEM,(MethodInfo *)0x0);
  }
  pNVar2 = Nekki_Yaml_YamlDocumentNekki__OACALLIJLDC(AFFECAIGLCG,(MethodInfo *)0x0);
  return pNVar2;
}


// ===== public static YamlDocumentNekki MPDLFPNJNED(string EIJDDKJONFO, string ILENGCADNIH = "", NPLIJHGBGCB.KJJHJABGFMH HIEHLGHMJDO = 0)  [RVA 0x33DE9F8]
// NPLIJHGBGCB$$MPDLFPNJNED @ RVA 0x33DE9F8

Nekki_Yaml_YamlDocumentNekki_o *
NPLIJHGBGCB__MPDLFPNJNED
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t HIEHLGHMJDO,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_Yaml_YamlDocumentNekki_o *pNVar3;
  
  if ((DAT_04567e8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567e8a = 1;
  }
  bVar1 = System_String__op_Inequality(ILENGCADNIH,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1/*""*/;
  if (bVar1) {
    pSVar2 = System_String__Concat(StringLiteral_1492/*"/"*/,ILENGCADNIH,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
  if (HIEHLGHMJDO == 2) {
    pSVar2 = CMEBCBKGFFL__IKCJLINAPOA(pSVar2,(MethodInfo *)0x0);
  }
  else if (HIEHLGHMJDO == 1) {
    pSVar2 = CMEBCBKGFFL__LMCHNOGAEHE(pSVar2,(MethodInfo *)0x0);
  }
  else {
    if (HIEHLGHMJDO != 0) {
      return (Nekki_Yaml_YamlDocumentNekki_o *)0x0;
    }
    pSVar2 = CMEBCBKGFFL__KGDAINKJCGG(pSVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = Nekki_Yaml_YamlDocumentNekki__OACALLIJLDC(pSVar2,(MethodInfo *)0x0);
  return pNVar3;
}


// ===== public static string JHDLBBNGEGA(Scalar OOGPLJBADCD, string NGFCPILIEFN = "")  [RVA 0x33DEB7C]
// NPLIJHGBGCB$$JHDLBBNGEGA @ RVA 0x33DEB7C

System_String_o *
NPLIJHGBGCB__JHDLBBNGEGA
          (Nekki_Yaml_Scalar_o *OOGPLJBADCD,System_String_o *NGFCPILIEFN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (OOGPLJBADCD != (Nekki_Yaml_Scalar_o *)0x0) {
    pSVar1 = Nekki_Yaml_Scalar__get_text(OOGPLJBADCD,(MethodInfo *)0x0);
    return pSVar1;
  }
  return NGFCPILIEFN;
}


// ===== public static int NBJOBDENGBM(Scalar OOGPLJBADCD, int NGFCPILIEFN = 0)  [RVA 0x33DEB90]
// NPLIJHGBGCB$$NBJOBDENGBM @ RVA 0x33DEB90

int32_t NPLIJHGBGCB__NBJOBDENGBM
                  (Nekki_Yaml_Scalar_o *OOGPLJBADCD,int32_t NGFCPILIEFN,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *s;
  
  if (OOGPLJBADCD != (Nekki_Yaml_Scalar_o *)0x0) {
    s = Nekki_Yaml_Scalar__get_text(OOGPLJBADCD,(MethodInfo *)0x0);
    iVar1 = System_Int32__Parse(s,(MethodInfo *)0x0);
    return iVar1;
  }
  return NGFCPILIEFN;
}


// ===== public static Mapping AAGOIGGOBDB(Mapping JHMENEKPIBO, string AFKICLAFDKC)  [RVA 0x33DEBB4]
// NPLIJHGBGCB$$AAGOIGGOBDB @ RVA 0x33DEBB4

/* WARNING: Removing unreachable block (ram,0x034dee34) */

Nekki_Yaml_Mapping_o *
NPLIJHGBGCB__AAGOIGGOBDB
          (Nekki_Yaml_Mapping_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_Yaml_Node_c *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  Nekki_Yaml_Mapping_o *JHMENEKPIBO_00;
  undefined1 auVar8 [16];
  
  if ((DAT_04567e8b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Mapping_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Node_TypeInfo);
    DAT_04567e8b = 1;
  }
  if (JHMENEKPIBO == (Nekki_Yaml_Mapping_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    do {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_034dec90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034dec90:
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        JHMENEKPIBO_00 = (Nekki_Yaml_Mapping_o *)0x0;
        goto LAB_034ded98;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_034decf0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034decf0:
      auVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      JHMENEKPIBO_00 = auVar8._0_8_;
      method_00 = auVar8._8_8_;
      if (JHMENEKPIBO_00 != (Nekki_Yaml_Mapping_o *)0x0) {
        bVar1 = (Nekki_Yaml_Node_TypeInfo->_2).naturalAligment;
        if (((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).naturalAligment < bVar1) ||
           (method_00 = Nekki_Yaml_Node_TypeInfo,
           (((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
           (Il2CppClass *)Nekki_Yaml_Node_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO_00);
        }
      }
      bVar2 = NPLIJHGBGCB__BIALACBFBPI((Nekki_Yaml_Node_o *)JHMENEKPIBO_00,(MethodInfo *)method_00);
    } while (!bVar2);
    if (JHMENEKPIBO_00 == (Nekki_Yaml_Mapping_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((JHMENEKPIBO_00->fields).super._key_k__BackingField,AFKICLAFDKC,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  bVar1 = (Nekki_Yaml_Mapping_TypeInfo->_2).naturalAligment;
  if (((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).naturalAligment < bVar1) ||
     ((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)Nekki_Yaml_Mapping_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(JHMENEKPIBO_00);
  }
LAB_034ded98:
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034dedf8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034dedf8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return JHMENEKPIBO_00;
}

