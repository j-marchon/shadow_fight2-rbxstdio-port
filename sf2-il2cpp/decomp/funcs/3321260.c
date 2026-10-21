// Nekki.SF2.GUI.Fight.RewardPanel$$BBJFKDOCEGL @ RVA 0x3321260

void Nekki_SF2_GUI_Fight_RewardPanel__BBJFKDOCEGL
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MGNDHCBAPEN_int__int__o *EBDBJJKINIM,
               bool LFKDFCGLHLC,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  undefined8 uVar6;
  int index;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_0456784d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_7449);
    DAT_0456784d = 1;
  }
  if ((EBDBJJKINIM != (MGNDHCBAPEN_int__int__o *)0x0) &&
     (pSVar3 = (__this->fields).MAHKJDKCNPC,
     pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0)) {
    index = (EBDBJJKINIM->fields).PHPELPFMOII;
    iVar2 = (pSVar3->fields)._size + -1;
    if ((iVar2 < index) || (iVar1 = (EBDBJJKINIM->fields).DOKHHBGJICA, iVar2 < iVar1)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      pSVar3 = (__this->fields).MAHKJDKCNPC;
      if (pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
        local_34 = (pSVar3->fields)._size;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
LAB_034214b0:
            uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items,pIVar4);
            local_38 = (EBDBJJKINIM->fields).PHPELPFMOII;
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_034214b0;
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
              local_3c = (EBDBJJKINIM->fields).DOKHHBGJICA;
              pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
              if ((pIVar4 != (Il2CppObject *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_034214b0;
              if (2 < (uint)args->max_length) {
                args->m_Items[2] = pIVar4;
                thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 0342143c to 035214cb has its CatchHandler @ 0342143c
                       catch() { ... } // from try @ 0342143c with catch @ 0342143c
                       catch() { ... } // from try @ 034214ec with catch @ 0342143c
                       catch() { ... } // from try @ 03421524 with catch @ 0342143c
                       catch() { ... } // from try @ 0342154c with catch @ 0342143c
                       catch() { ... } // from try @ 03421594 with catch @ 0342143c */
                UnityEngine_Debug__LogErrorFormat(StringLiteral_7449,args,(MethodInfo *)0x0);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
    else {
      if (iVar1 < index) {
        return;
      }
      do {
        __this_00 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               Method_System_Collections_Generic_List<RewardPanelItem>_get_Item__);
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_GameObject_o *)0x0)) break;
        UnityEngine_GameObject__SetActive(__this_01,LFKDFCGLHLC,(MethodInfo *)0x0);
        index = index + 1;
        if ((EBDBJJKINIM->fields).DOKHHBGJICA < index) {
          return;
        }
        pSVar3 = (__this->fields).MAHKJDKCNPC;
      } while (pSVar3 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

