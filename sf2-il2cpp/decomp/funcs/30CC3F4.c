// JIBAEMHNBOF$$BGNGHFFFHNA @ RVA 0x30CC3F4

void JIBAEMHNBOF__BGNGHFFFHNA
               (JIBAEMHNBOF_o *__this,NCCFNKMICGK_o *NLFMDIGKNGP,
               JIBAEMHNBOF_HHCLGENAOLA_o *MOAIKBONJAE,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  NCCFNKMICGK_c *pNVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045662d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Clear__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662d5 = 1;
  }
  if (NLFMDIGKNGP == (NCCFNKMICGK_o *)0x0) {
    return;
  }
  pNVar8 = NLFMDIGKNGP->klass;
  uVar1._0_1_ = (pNVar8->_2).rank;
  uVar1._1_1_ = (pNVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar6 = pNVar8->vtable + (*piVar10 + 8);
        goto LAB_031cc4a4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc4a4:
  lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x248), lVar7 != 0)) {
    length = *(int32_t *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar7 + 0x10),0,length,(MethodInfo *)0x0);
    }
    pNVar8 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar8->_2).rank;
    uVar2._1_1_ = (pNVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar6 = pNVar8->vtable + (*piVar10 + 8);
          goto LAB_031cc530;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc530:
    lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
    if (((lVar7 != 0) && (MOAIKBONJAE != (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0)) &&
       (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x248) !=
        (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__AddRange
                (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x248),
                 (System_Collections_Generic_IEnumerable_T__o *)(MOAIKBONJAE->fields).JJEDHODDHMF,
                 Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
      pNVar8 = NLFMDIGKNGP->klass;
      uVar3._0_1_ = (pNVar8->_2).rank;
      uVar3._1_1_ = (pNVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar6 = pNVar8->vtable + (*piVar10 + 8);
            goto LAB_031cc5b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc5b0:
      lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
      if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 0x260) != (GEIHBHEDJJM_o *)0x0)) {
        GEIHBHEDJJM__KFMNMGGDHFD
                  (*(GEIHBHEDJJM_o **)(lVar7 + 0x260),(MOAIKBONJAE->fields).ENBNOOPELIP,
                   (MethodInfo *)0x0);
        pNVar8 = NLFMDIGKNGP->klass;
        uVar4._0_1_ = (pNVar8->_2).rank;
        uVar4._1_1_ = (pNVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar4;
        if (uVar9 != 0) {
          piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar6 = pNVar8->vtable + (*piVar10 + 8);
              goto LAB_031cc624;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc624:
        lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
        if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 0x250) != (GEIHBHEDJJM_o *)0x0)) {
          GEIHBHEDJJM__KFMNMGGDHFD
                    (*(GEIHBHEDJJM_o **)(lVar7 + 0x250),(MOAIKBONJAE->fields).OFNEAFGINLC,
                     (MethodInfo *)0x0);
          pNVar8 = NLFMDIGKNGP->klass;
          uVar5._0_1_ = (pNVar8->_2).rank;
          uVar5._1_1_ = (pNVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar5;
          if (uVar9 != 0) {
            piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar6 = pNVar8->vtable + (*piVar10 + 8);
                goto LAB_031cc698;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc698:
          lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
          if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 600) != (GEIHBHEDJJM_o *)0x0)) {
            GEIHBHEDJJM__KFMNMGGDHFD
                      (*(GEIHBHEDJJM_o **)(lVar7 + 600),(MOAIKBONJAE->fields).DEELCMCEILO,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

