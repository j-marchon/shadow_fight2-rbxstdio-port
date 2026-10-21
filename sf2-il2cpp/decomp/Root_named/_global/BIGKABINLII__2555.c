// TypeDefIndex 2555
// Namespace: 
// public class BIGKABINLII : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x339B354]
// BIGKABINLII$$.ctor @ RVA 0x339B354

void BIGKABINLII___ctor(BIGKABINLII_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x339B35C]
// BIGKABINLII$$MAHFCKJGBPP @ RVA 0x339B35C

void BIGKABINLII__MAHFCKJGBPP(BIGKABINLII_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  CLMJPODNPKB_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 0349b368 to 0359b413 has its CatchHandler @ 0349b368
                       catch() { ... } // from try @ 0349b368 with catch @ 0349b368
                       catch() { ... } // from try @ 0349b41c with catch @ 0349b368
                       catch() { ... } // from try @ 0349b46c with catch @ 0349b368
                       catch() { ... } // from try @ 0349b490 with catch @ 0349b368
                       catch() { ... } // from try @ 0349b4d0 with catch @ 0349b368 */
  if ((DAT_04567c7a & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04567c7a = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  bVar2 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
  if (bVar2) {
    pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
    if (pCVar3 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar5 = pCVar3->klass;
    uVar1._0_1_ = (pCVar5->_2).rank;
    uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
          pVVar4 = pCVar5->vtable + (*piVar7 + 2);
          goto LAB_0349b410;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,2);
LAB_0349b410:
                    /* try { // try from 0349b414 to 0359b41b has its CatchHandler @ 0349b474 */
    (*pVVar4->methodPtr)(pCVar3,pVVar4->method);
  }
                    /* try { // try from 0349b41c to 0359b467 has its CatchHandler @ 0349b368 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

