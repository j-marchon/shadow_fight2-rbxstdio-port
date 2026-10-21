// KOGMOACEOAM$$ICNKLIDJEBG @ RVA 0x32EA5FC

void KOGMOACEOAM__ICNKLIDJEBG
               (KOGMOACEOAM_o *__this,System_IO_BinaryReader_o *NLKOFFFAFHM,int32_t PGFAIJMMOHJ,
               MethodInfo *method)

{
  uint uVar1;
  int HFBFLHCIGNB;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  System_Single_array *JGHIJMJNJLE;
  System_Single_array *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Single_array_array *pSVar6;
  int KBAJGAHMEAF;
  int value;
  ulong uVar7;
  float fVar8;
  
  method_00 = (MethodInfo *)(ulong)(uint)PGFAIJMMOHJ;
  if ((DAT_04567633 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>_set_Capacity__);
    FUN_01bab630(&float___TypeInfo);
    FUN_01bab630(&StringLiteral_17398);
    FUN_01bab630(&StringLiteral_17399);
    DAT_04567633 = 1;
  }
  if (0 < PGFAIJMMOHJ) {
    iVar4 = KOGMOACEOAM__AKNJIJEHOBH(__this,NLKOFFFAFHM,method_00);
    pSVar5 = (__this->fields).KBPGCNCNJAG;
    if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
LAB_033ea888:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    HFBFLHCIGNB = (pSVar5->fields)._size;
    uVar2 = PGFAIJMMOHJ - iVar4;
    if ((uVar2 & 3) != 0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_17398,(MethodInfo *)0x0);
    }
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = (int)uVar1 >> 2;
    value = 0;
    if (HFBFLHCIGNB != 0) {
      value = (int)uVar1 / HFBFLHCIGNB;
    }
    if (uVar1 != value * HFBFLHCIGNB) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_17399,(MethodInfo *)0x0);
    }
    JGHIJMJNJLE = (System_Single_array *)FUN_01bab718(float___TypeInfo,uVar1);
    if (3 < (int)uVar2) {
      if (NLKOFFFAFHM == (System_IO_BinaryReader_o *)0x0) goto LAB_033ea888;
      uVar7 = 0;
      do {
        fVar8 = (float)(*(NLKOFFFAFHM->klass->vtable)._19_ReadSingle.methodPtr)
                                 (NLKOFFFAFHM,(NLKOFFFAFHM->klass->vtable)._19_ReadSingle.method);
        if (JGHIJMJNJLE == (System_Single_array *)0x0) goto LAB_033ea888;
        if ((uint)JGHIJMJNJLE->max_length <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        JGHIJMJNJLE->m_Items[uVar7] = fVar8;
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)__this,value,
               Method_System_Collections_Generic_List<float[]>_set_Capacity__);
    if (0 < value) {
      KBAJGAHMEAF = 0;
      do {
        if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        item = KJFHBENFBBO__IANJLAEPPBH<float>
                         (JGHIJMJNJLE,KBAJGAHMEAF,HFBFLHCIGNB,
                          KJFHBENFBBO_TypeInfo->static_fields->JFDJCGGDGEC,
                          Method_KJFHBENFBBO_IANJLAEPPBH<float>__);
        lVar3 = Method_System_Collections_Generic_List<float[]>_Add__;
        pSVar6 = (__this->fields).super._items;
        (__this->fields).super._version = (__this->fields).super._version + 1;
        if (pSVar6 == (System_Single_array_array *)0x0) goto LAB_033ea888;
        uVar2 = (__this->fields).super._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this->fields).super._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,&item->obj,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        value = value + -1;
        KBAJGAHMEAF = KBAJGAHMEAF + HFBFLHCIGNB;
      } while (value != 0);
    }
  }
  return;
}

