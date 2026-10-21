// KDPDBGNOFEN$$NAGMMNGLGAI @ RVA 0x34AE054

System_String_o *
KDPDBGNOFEN__NAGMMNGLGAI
          (KDPDBGNOFEN_o *__this,Sfs2X_Core_BaseEvent_o *ICLHKEAILDM,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  int32_t length;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  System_Collections_Hashtable_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Hashtable_o *pSVar11;
  
  if ((DAT_04568556 & 1) == 0) {
    FUN_01bab630(&System_Collections_IDictionary_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16698);
    FUN_01bab630(&StringLiteral_329);
    FUN_01bab630(&StringLiteral_3479);
    FUN_01bab630(&StringLiteral_585);
    FUN_01bab630(&StringLiteral_19658);
    __this = (KDPDBGNOFEN_o *)FUN_01bab630(&StringLiteral_15775);
    DAT_04568556 = 1;
  }
  uVar3 = StringLiteral_19658;
  if ((ICLHKEAILDM != (Sfs2X_Core_BaseEvent_o *)0x0) &&
     (pSVar11 = (ICLHKEAILDM->fields).arguments, pSVar11 != (System_Collections_Hashtable_o *)0x0))
  {
    pSVar8 = pSVar11->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IDictionary_TypeInfo) {
          pVVar5 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_035ae148;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar11,System_Collections_IDictionary_TypeInfo,0);
LAB_035ae148:
    plVar6 = (long *)(*pVVar5->methodPtr)(pSVar11,uVar3,pVVar5->method);
    __this = (KDPDBGNOFEN_o *)0x0;
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)
               (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      __this = (KDPDBGNOFEN_o *)0x0;
      if (pSVar7 != (System_String_o *)0x0) {
        bVar4 = System_String__Contains(pSVar7,StringLiteral_3479,(MethodInfo *)0x0);
        if ((!bVar4) ||
           (length = System_String__IndexOf(pSVar7,10,(MethodInfo *)0x0),
           pSVar2 = StringLiteral_16698, length < 1)) {
          pSVar7 = System_String__Concat
                             ((ICLHKEAILDM->fields).type,StringLiteral_585,pSVar7,(MethodInfo *)0x0)
          ;
          return pSVar7;
        }
        values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
        __this = (KDPDBGNOFEN_o *)0x0;
        if (values != (System_String_array *)0x0) {
          if ((int)values->max_length != 0) {
            values->m_Items[0] = (ICLHKEAILDM->fields).type;
            thunk_FUN_01c20e04(values->m_Items);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = StringLiteral_585;
              thunk_FUN_01c20e04(values->m_Items + 1);
              pSVar7 = System_String__Substring(pSVar7,0,length,(MethodInfo *)0x0);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = pSVar7;
                thunk_FUN_01c20e04(values->m_Items + 2,pSVar7);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = StringLiteral_329;
                  thunk_FUN_01c20e04(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = pSVar2;
                    thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
                    if (5 < (uint)values->max_length) {
                      values->m_Items[5] = StringLiteral_15775;
                      thunk_FUN_01c20e04();
                      pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                      return pSVar7;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

