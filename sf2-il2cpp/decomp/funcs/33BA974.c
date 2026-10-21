// Nekki.SF2.GUI.TimerLabel$$GetTimeString @ RVA 0x33BA974

System_String_o *
Nekki_SF2_GUI_TimerLabel__GetTimeString
          (int64_t NFBEBOIDJLL,bool FCCHAOBFMLN,bool AMKBKDCAFLI,bool DDIEKBDNKOJ,bool MFIBLKCPALL,
          bool NBIPBICFIHP,bool KMPEMOELBMP,System_String_o *FJDJFJNEEJI,
          System_String_o *PFCGLNFFKFG,bool LMOANJOPDGM,bool BMNAFCNAEII,bool LDGOECJACBJ,
          bool PMCFDOFEBAA,bool MCGOEEBPEIJ,System_String_o *JONDDIMGADB,
          System_String_o *FCLHIDDAHIJ,System_String_o *EFIHACGLMNA,int32_t BCDLHKNFNDA,
          MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *__this;
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_Object_array *pSVar9;
  int value;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  int32_t local_6c;
  System_TimeSpan_Fields local_68;
  
  if ((DAT_04567d9f & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_ToArray__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<object>_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_13820);
    FUN_01bab630(&StringLiteral_2106);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_2107);
    DAT_04567d9f = 1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_13820,StringLiteral_1,(MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_68._ticks = (int64_t)System_TimeSpan__FromSeconds((double)NFBEBOIDJLL,(MethodInfo *)0x0);
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<object>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<object>__ctor__);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (MFIBLKCPALL) {
    if (!NBIPBICFIHP) {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar13 = System_TimeSpan__get_TotalDays((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      if (dVar13 < 1.0) {
        uVar11 = 0;
        goto LAB_034bab4c;
      }
    }
    uVar11 = (uint)(0 < BCDLHKNFNDA);
  }
  else {
    uVar11 = 0;
  }
LAB_034bab4c:
  uVar12 = uVar11;
  if (DDIEKBDNKOJ) {
    if (!KMPEMOELBMP) {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar13 = System_TimeSpan__get_TotalHours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      if (dVar13 < 1.0) {
        bVar5 = false;
        bVar1 = true;
        goto LAB_034babcc;
      }
    }
    bVar1 = BCDLHKNFNDA <= (int)uVar11;
    if (!bVar1) {
      uVar12 = uVar11 + 1;
    }
    bVar5 = !bVar1;
  }
  else {
    bVar5 = false;
    bVar1 = true;
  }
LAB_034babcc:
  uVar3 = (uint)((int)uVar12 < BCDLHKNFNDA && AMKBKDCAFLI);
  bVar2 = (int)(uVar12 + uVar3) < BCDLHKNFNDA;
  if (uVar11 == 0) {
    iVar10 = 0;
    if (bVar1) goto LAB_034badb8;
LAB_034bac94:
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Hours((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    value = iVar10 + 1;
    System_Text_StringBuilder__Append(__this_00,iVar10,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106;
    if (!PMCFDOFEBAA) {
      puVar4 = &StringLiteral_2107;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,JONDDIMGADB,(MethodInfo *)0x0);
    iVar10 = value;
    if (((uVar3 != 0) || (bVar2 && FCCHAOBFMLN)) &&
       (System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0), uVar3 != 0))
    goto LAB_034bae44;
LAB_034baee0:
    if (bVar2 && FCCHAOBFMLN) {
LAB_034baf74:
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_6c = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
      pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
      lVar6 = Method_System_Collections_Generic_List<object>_Add__;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
      pSVar9 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
      uVar11 = (__this->fields)._size;
      if (uVar11 < (uint)pSVar9->max_length) {
        (__this->fields)._size = uVar11 + 1;
        pSVar9->m_Items[(int)uVar11] = pIVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,pIVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
      System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,iVar10,(MethodInfo *)0x0);
      puVar4 = &StringLiteral_2106;
      if (!BMNAFCNAEII) {
        puVar4 = &StringLiteral_2107;
      }
      System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,EFIHACGLMNA,(MethodInfo *)0x0);
    }
    else if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
  }
  else {
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Days((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,0,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106;
    if (!MCGOEEBPEIJ) {
      puVar4 = &StringLiteral_2107;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,PFCGLNFFKFG,(MethodInfo *)0x0);
    if ((LMOANJOPDGM) && ((bVar5 || uVar3 != 0) || bVar2 && FCCHAOBFMLN)) {
      System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0);
    }
    iVar10 = 1;
    if (!bVar1) goto LAB_034bac94;
LAB_034badb8:
    value = iVar10;
    if (uVar3 == 0) goto LAB_034baee0;
LAB_034bae44:
    if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_6c = System_TimeSpan__get_Minutes((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
    pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_6c);
    lVar6 = Method_System_Collections_Generic_List<object>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_034bb0c8;
    pSVar9 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_034bb0c8;
    uVar11 = (__this->fields)._size;
    if (uVar11 < (uint)pSVar9->max_length) {
      (__this->fields)._size = uVar11 + 1;
      pSVar9->m_Items[(int)uVar11] = pIVar7;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,pIVar7,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_034bb0c8;
    System_Text_StringBuilder__Append(__this_00,0x7b,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
    puVar4 = &StringLiteral_2106;
    if (!LDGOECJACBJ) {
      puVar4 = &StringLiteral_2107;
    }
    System_Text_StringBuilder__Append(__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    System_Text_StringBuilder__Append(__this_00,FCLHIDDAHIJ,(MethodInfo *)0x0);
    if (bVar2 && FCCHAOBFMLN) {
      iVar10 = value + 1;
      System_Text_StringBuilder__Append(__this_00,FJDJFJNEEJI,(MethodInfo *)0x0);
      goto LAB_034baf74;
    }
  }
  pSVar8 = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar9 = System_Collections_Generic_List<object>__ToArray
                       (__this,Method_System_Collections_Generic_List<object>_ToArray__);
    pSVar8 = System_String__Format(pSVar8,pSVar9,(MethodInfo *)0x0);
    return pSVar8;
  }
LAB_034bb0c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

