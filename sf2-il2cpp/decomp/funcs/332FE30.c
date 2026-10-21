// Nekki.SF2.GUI.Pvp.PlayerSelector$$DKOKAFFCHHJ @ RVA 0x332FE30

void Nekki_SF2_GUI_Pvp_PlayerSelector__DKOKAFFCHHJ
               (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,bool EOKHCDLHMDA,
               UnityEngine_Vector2_o BLEOKMIDGIK,float LFJGFLNMBMC,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  ulong uVar7;
  PBAKFOBIHEG_c *pPVar8;
  int32_t *piVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_array *pUVar11;
  ulong uVar12;
  undefined4 in_register_00005044;
  
  if ((DAT_04567900 & 1) == 0) {
    FUN_01bab630(&System_Func<Transform,_int,_float,_float,_IEnumerator>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_DAPNAKOICBI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_EEEOCIACHAA__);
    DAT_04567900 = 1;
  }
  lVar3 = thunk_FUN_01bda818(System_Func<Transform,_int,_float,_float,_IEnumerator>_TypeInfo);
  System_Func<object,_int,_float,_float,_object>___ctor();
  pUVar11 = (__this->fields).FCGNALDLKNA;
  if (pUVar11 != (UnityEngine_Transform_array *)0x0) {
    if (0 < (int)pUVar11->max_length) {
      uVar12 = 0;
      uVar7 = pUVar11->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pUVar10 = pUVar11->m_Items[uVar12];
        pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar7 = (ulong)BLEOKMIDGIK.fields & 0xffffffff;
        if ((DPJIDNBJIBG != 0) && (uVar7 = (ulong)BLEOKMIDGIK.fields >> 0x20, DPJIDNBJIBG != 1)) {
          thunk_FUN_01bb9178((ulong)BLEOKMIDGIK.fields >> 0x20,
                             &System_IndexOutOfRangeException_TypeInfo);
          __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
          message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7706);
          System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
          uVar5 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector2_get_Item__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar5);
        }
        if ((lVar3 == 0) ||
           (uVar5 = (**(code **)(lVar3 + 0x18))
                              (uVar7,CONCAT44(in_register_00005044,LFJGFLNMBMC),
                               *(undefined8 *)(lVar3 + 0x40),pUVar10,DPJIDNBJIBG,
                               *(undefined8 *)(lVar3 + 0x28)), pPVar4 == (PBAKFOBIHEG_o *)0x0))
        goto LAB_0342ffe8;
        pPVar8 = pPVar4->klass;
        uVar2._0_1_ = (pPVar8->_2).rank;
        uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar9 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar8->vtable + *piVar9;
              goto LAB_0342ffa8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_0342ffa8:
        (*pVVar6->methodPtr)(pPVar4,uVar5,0,pVVar6->method);
        uVar1 = (uint)pUVar11->max_length;
        uVar7 = (ulong)uVar1;
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)uVar1);
    }
    return;
  }
LAB_0342ffe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

