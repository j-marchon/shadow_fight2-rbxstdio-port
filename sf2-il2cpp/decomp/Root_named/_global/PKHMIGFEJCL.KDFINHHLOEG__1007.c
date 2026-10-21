// TypeDefIndex 1007
// Namespace: 
// [CompilerGenerated]
// private sealed class PKHMIGFEJCL.KDFINHHLOEG
// Fields:
//   public PKHMIGFEJCL <>4__this; // 0x10
//   public HHMDFAMGHPB packsConfig; // 0x18

// ===== public void .ctor()  [RVA 0x30C1E9C]
// PKHMIGFEJCL.KDFINHHLOEG$$.ctor @ RVA 0x30C1E9C

void PKHMIGFEJCL_KDFINHHLOEG___ctor(PKHMIGFEJCL_KDFINHHLOEG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void HKCCCFBLGAK(string pack)  [RVA 0x30C24D8]
// PKHMIGFEJCL.KDFINHHLOEG$$HKCCCFBLGAK @ RVA 0x30C24D8

void PKHMIGFEJCL_KDFINHHLOEG__HKCCCFBLGAK
               (PKHMIGFEJCL_KDFINHHLOEG_o *__this,System_String_o *pack,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar3;
  HHMDFAMGHPB_c *pHVar4;
  ulong uVar5;
  int32_t *piVar6;
  HHMDFAMGHPB_o *pHVar7;
  PKHMIGFEJCL_o *pPVar8;
  float fVar9;
  float fVar10;
  
                    /* try { // try from 031c24e4 to 032c2657 has its CatchHandler @ 031c24e4
                       catch() { ... } // from try @ 031c24e4 with catch @ 031c24e4
                       catch() { ... } // from try @ 031c26f0 with catch @ 031c24e4
                       catch() { ... } // from try @ 031c285c with catch @ 031c24e4
                       catch() { ... } // from try @ 031c28f8 with catch @ 031c24e4 */
  if ((DAT_0456629a & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    DAT_0456629a = 1;
  }
  pPVar8 = (__this->fields).__4__this;
  if ((pPVar8 != (PKHMIGFEJCL_o *)0x0) &&
     (pHVar7 = (__this->fields).packsConfig, pHVar7 != (HHMDFAMGHPB_o *)0x0)) {
    pHVar4 = pHVar7->klass;
    fVar10 = (pPVar8->fields)._HIDGMMHJLLD_k__BackingField;
    uVar1._0_1_ = (pHVar4->_2).rank;
    uVar1._1_1_ = (pHVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pHVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar2 = pHVar4->vtable + *piVar6;
          goto LAB_031c2580;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pHVar7,HHMDFAMGHPB_TypeInfo,0);
LAB_031c2580:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar2->methodPtr)(pHVar7,pVVar2->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar3 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,pack,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      if (pIVar3 == (Il2CppObject *)0x0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = PCOEHCPGBBG__OFFODGKLGOP((System_String_o *)pIVar3[2].klass,0.0,(MethodInfo *)0x0);
      }
      (pPVar8->fields)._HIDGMMHJLLD_k__BackingField = fVar10 + fVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

