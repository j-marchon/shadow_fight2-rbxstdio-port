// Nekki.SF2.GUI.Pvp.PlayerSelector.IHBEAIOFKMN$$MoveNext @ RVA 0x3330BB4

bool Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN__MoveNext
               (Nekki_SF2_GUI_Pvp_PlayerSelector_IHBEAIOFKMN_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Func_float__float__o **ppSVar6;
  UnityEngine_UI_Graphic_o *pUVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar11;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x5;
  Nekki_SF2_GUI_Pvp_PlayerSelector_c *pNVar12;
  ulong uVar13;
  int32_t *piVar14;
  int32_t iVar15;
  UnityEngine_UI_Graphic_o **ppUVar16;
  Nekki_SF2_GUI_Pvp_PlayerSelector_o *pNVar17;
  System_Func_float__float__o *pSVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  
  if ((DAT_04567904 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Graphic>__);
    FUN_01bab630(&System_Func<float,_float>_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_ECPOHGEPIKJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_GJHAEGOKFOK__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo);
    DAT_04567904 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  bVar4 = false;
  if (iVar1 == 2) {
    iVar15 = -1;
  }
  else {
    pNVar17 = (__this->fields).__4__this;
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (pNVar17 == (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) goto LAB_03430f9c;
      fVar20 = (__this->fields).finalPosition;
      fVar19 = (pNVar17->fields).OCKGCJMKBIG.fields.y;
      fVar21 = fVar19 * 0.5;
      if ((__this->fields)._startPosition_5__2 - fVar20 < 0.0) {
        fVar21 = -(fVar19 * 0.5);
      }
      if ((Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo,method);
        method = extraout_x1_00;
      }
      pSVar18 = Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields->__9__21_1;
      if (pSVar18 == (System_Func_float__float__o *)0x0) {
        if ((Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo,method);
        }
        pSVar18 = (System_Func_float__float__o *)
                  thunk_FUN_01bda818(System_Func<float,_float>_TypeInfo);
        System_Func<float,_float>___ctor();
        ppSVar6 = &Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields->__9__21_1;
        *ppSVar6 = pSVar18;
        thunk_FUN_01c20e04(ppSVar6,pSVar18);
      }
      pNVar17 = (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)
                CoroutineManager__get_Current((MethodInfo *)0x0);
      pSVar8 = Nekki_SF2_GUI_Pvp_PlayerSelector__LKKCCNDIDDM
                         (pNVar17,(__this->fields).trans,(__this->fields).index,
                          (__this->fields)._graphic_5__3,fVar20 - fVar21,fVar20,
                          (__this->fields)._lTime_5__4,pSVar18,in_x5);
      if (pNVar17 == (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) goto LAB_03430f9c;
      pNVar12 = pNVar17->klass;
      uVar2._0_1_ = (pNVar12->_2).rank;
      uVar2._1_1_ = (pNVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pNVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar9 = &(pNVar12->vtable)._0_Equals + *piVar14;
            goto LAB_03430f24;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pNVar17,PBAKFOBIHEG_TypeInfo,0);
LAB_03430f24:
      pIVar10 = (Il2CppObject *)(*pVVar9->methodPtr)(pNVar17,pSVar8,0,pVVar9->method);
      (__this->fields).__2__current = pIVar10;
      iVar15 = 2;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      pUVar5 = (__this->fields).trans;
      (__this->fields).__1__state = -1;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
LAB_03430f9c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UVar22 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
      iVar1 = (__this->fields).index;
      fVar21 = UVar22.fields.x;
      if (((iVar1 != 0) && (fVar21 = UVar22.fields.z, iVar1 != 2)) &&
         (fVar21 = UVar22.fields.y, iVar1 != 1)) {
        thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
        __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
        message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707);
        System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
        uVar11 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector3_get_Item__);
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(__this_00,uVar11);
      }
      pUVar5 = (__this->fields).trans;
      (__this->fields)._startPosition_5__2 = fVar21;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03430f9c;
      pUVar7 = (UnityEngine_UI_Graphic_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar5,
                          Method_UnityEngine_Component_GetComponent<Graphic>__);
      ppUVar16 = &(__this->fields)._graphic_5__3;
      *ppUVar16 = pUVar7;
      thunk_FUN_01c20e04(ppUVar16,pUVar7);
      (__this->fields)._lTime_5__4 = (__this->fields).time;
      if (pNVar17 == (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) goto LAB_03430f9c;
      fVar20 = (__this->fields)._startPosition_5__2;
      fVar19 = (pNVar17->fields).OCKGCJMKBIG.fields.x;
      fVar21 = fVar19 * 0.5;
      if ((__this->fields).finalPosition - fVar20 < 0.0) {
        fVar21 = -(fVar19 * 0.5);
      }
      if ((Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar18 = Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields->__9__21_0;
      if (pSVar18 == (System_Func_float__float__o *)0x0) {
        if ((Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar18 = (System_Func_float__float__o *)
                  thunk_FUN_01bda818(System_Func<float,_float>_TypeInfo);
        System_Func<float,_float>___ctor();
        ppSVar6 = &Nekki_SF2_GUI_Pvp_PlayerSelector_<>c_TypeInfo->static_fields->__9__21_0;
        *ppSVar6 = pSVar18;
        thunk_FUN_01c20e04(ppSVar6,pSVar18);
      }
      pNVar17 = (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)
                CoroutineManager__get_Current((MethodInfo *)0x0);
      pSVar8 = Nekki_SF2_GUI_Pvp_PlayerSelector__LKKCCNDIDDM
                         (pNVar17,(__this->fields).trans,(__this->fields).index,
                          (__this->fields)._graphic_5__3,fVar20,fVar20 - fVar21,
                          (__this->fields)._lTime_5__4,pSVar18,in_x5);
      if (pNVar17 == (Nekki_SF2_GUI_Pvp_PlayerSelector_o *)0x0) goto LAB_03430f9c;
      pNVar12 = pNVar17->klass;
      uVar3._0_1_ = (pNVar12->_2).rank;
      uVar3._1_1_ = (pNVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar3;
      if (uVar13 != 0) {
        piVar14 = &((pNVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar9 = &(pNVar12->vtable)._0_Equals + *piVar14;
            goto LAB_03430f58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pNVar17,PBAKFOBIHEG_TypeInfo,0);
LAB_03430f58:
      pIVar10 = (Il2CppObject *)(*pVVar9->methodPtr)(pNVar17,pSVar8,0,pVVar9->method);
      (__this->fields).__2__current = pIVar10;
      iVar15 = 1;
    }
    thunk_FUN_01c20e04();
    bVar4 = true;
  }
  (__this->fields).__1__state = iVar15;
  return bVar4;
}

