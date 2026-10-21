// ONPHBGJDFBM$$KCEBNCEKNJD @ RVA 0x31335A8

bool ONPHBGJDFBM__KCEBNCEKNJD
               (ONPHBGJDFBM_o *__this,System_Collections_Generic_List_Delegate__o *PLELINICIDD,
               System_Int32_array *MLNEFBDGKEK,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  uint uVar3;
  System_Action_KEFHDOHHHML__o *pSVar4;
  long lVar5;
  MethodInfo *method_00;
  ulong uVar6;
  Il2CppObject *item;
  ulong uVar7;
  
  if ((DAT_045666e8 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Delegate>_IndexOf__);
    DAT_045666e8 = 1;
  }
  pSVar4 = (__this->fields).BLNMHHKCCOD;
  if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
    return true;
  }
  lVar5 = (*(pSVar4->klass->vtable)._10_GetInvocationList.methodPtr)
                    (pSVar4,(pSVar4->klass->vtable)._10_GetInvocationList.method);
  if (lVar5 == 0) {
LAB_03233718:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar7 = 0;
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar6 <= uVar7) {
LAB_0323371c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (PLELINICIDD == (System_Collections_Generic_List_Delegate__o *)0x0) goto LAB_03233718;
      item = *(Il2CppObject **)(lVar5 + 0x20 + uVar7 * 8);
      method_00 = Method_System_Collections_Generic_List<Delegate>_IndexOf__;
      uVar3 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)PLELINICIDD,item,
                         (MethodInfo_26E5A4C *)
                         Method_System_Collections_Generic_List<Delegate>_IndexOf__);
      pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
      if (-1 < (int)uVar3) {
        if (item == (Il2CppObject *)0x0) {
          pSVar4 = (System_Action_KEFHDOHHHML__o *)0x0;
        }
        else {
          pSVar4 = (System_Action_KEFHDOHHHML__o *)
                   thunk_FUN_01bda71c(item,System_Action<KEFHDOHHHML>_TypeInfo);
          if (pSVar4 == (System_Action_KEFHDOHHHML__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(item,pSVar1);
          }
        }
        ONPHBGJDFBM__DBBHAGMABOB(__this,pSVar4,method_00);
        if (MLNEFBDGKEK == (System_Int32_array *)0x0) goto LAB_03233718;
        if ((uint)MLNEFBDGKEK->max_length <= uVar3) goto LAB_0323371c;
        MLNEFBDGKEK->m_Items[uVar3] = MLNEFBDGKEK->m_Items[uVar3] + 1;
        break;
      }
      uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  bVar2 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                    ((System_Action_T__o *)(__this->fields).BLNMHHKCCOD,
                     Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
  return bVar2;
}

