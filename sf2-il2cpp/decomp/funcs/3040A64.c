// PJKHAJKEHEL$$ToString @ RVA 0x3040A64

System_String_o * PJKHAJKEHEL__ToString(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  HOOAAGABMBL_o *pHVar5;
  System_String_o *pSVar6;
  uint32_t local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04565dad & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03140aa4 to 03240ac3 has its CatchHandler @ 03140ae8 */
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    /* try { // try from 03140ac4 to 03240adb has its CatchHandler @ 03140a20 */
    FUN_01bab630(&uint_TypeInfo);
    FUN_01bab630(&StringLiteral_14625);
                    /* try { // try from 03140adc to 03240ae7 has its CatchHandler @ 03140ae8 */
    DAT_04565dad = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03140aa4 with catch @ 03140ae8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03140adc with catch @ 03140ae8
                       try { // try from 03140ae8 to 03240b03 has its CatchHandler @ 03140a20 */
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,10);
  local_50 = (ulong)local_50._4_4_ << 0x20;
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_50);
                    /* try { // try from 03140b04 to 03240b07 has its CatchHandler @ 03140b0c */
  if (args == (System_Object_array *)0x0) {
LAB_03140e40:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03140b04 with catch @ 03140b0c */
                    /* try { // try from 03140b10 to 03240b17 has its CatchHandler @ 03140b20 */
                    /* try { // try from 03140b18 to 03240b23 has its CatchHandler @ 03140a20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03140b10 with catch @ 03140b20
                        */
  if ((pIVar1 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
  goto LAB_03140e34;
                    /* catch() { ... } // from try @ 03140b38 with catch @ 03140b28
                       catch() { ... } // from try @ 03140b68 with catch @ 03140b28
                       catch() { ... } // from try @ 03140ba4 with catch @ 03140b28 */
  if ((int)args->max_length == 0) goto LAB_03140e30;
  args->m_Items[0] = pIVar1;
                    /* try { // try from 03140b34 to 03240b37 has its CatchHandler @ 03140b4c */
                    /* try { // try from 03140b38 to 03240b63 has its CatchHandler @ 03140b28 */
  thunk_FUN_01c20e04(args->m_Items,pIVar1);
  pHVar5 = (__this->fields).PEMECEBIJDM;
  if (pHVar5 == (HOOAAGABMBL_o *)0x0) goto LAB_03140e40;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03140b34 with catch @ 03140b4c
                        */
  local_70 = CONCAT44(local_70._4_4_,(pHVar5->fields)._NGHJMLEPOFF_k__BackingField);
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
                    /* try { // try from 03140b64 to 03240b67 has its CatchHandler @ 03140b94 */
                    /* try { // try from 03140b68 to 03240b97 has its CatchHandler @ 03140b28 */
  if ((pIVar1 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03140e34:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if (1 < (uint)args->max_length) {
    args->m_Items[1] = pIVar1;
                    /* catch() { ... } // from try @ 03140b64 with catch @ 03140b94 */
    thunk_FUN_01c20e04(args->m_Items + 1,pIVar1);
    pSVar3 = StringLiteral_14625;
                    /* try { // try from 03140b98 to 03240ba3 has its CatchHandler @ 03140bb8 */
    pHVar5 = (__this->fields).PNAAPNFPCPI;
    local_34 = 0;
    if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
      local_34 = (pHVar5->fields)._NGHJMLEPOFF_k__BackingField;
    }
                    /* try { // try from 03140ba4 to 03240baf has its CatchHandler @ 03140b28 */
                    /* try { // try from 03140bb0 to 03240bb7 has its CatchHandler @ 03140bb8 */
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03140b98 with catch @ 03140bb8
                       catch(type#2 @ 00000000) { ... } // from try @ 03140bb0 with catch @ 03140bb8
                        */
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_03140e34;
    if (2 < (uint)args->max_length) {
      args->m_Items[2] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 2,pIVar1);
      local_38 = (__this->fields).NEKMDLBLENC;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03140e34;
      if (3 < (uint)args->max_length) {
        args->m_Items[3] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items + 3,pIVar1);
        local_40._0_1_ = (__this->fields).IJDAKGKCHLG.fields.fakeValueActive;
        local_40._1_1_ = (__this->fields).IJDAKGKCHLG.fields.inited;
        local_40._2_2_ = *(undefined2 *)&(__this->fields).IJDAKGKCHLG.fields.field_0x12;
        uStack_48._0_4_ = (__this->fields).IJDAKGKCHLG.fields.hiddenValueOldByte4;
        uStack_48._4_4_ = (__this->fields).IJDAKGKCHLG.fields.fakeValue;
        local_50._0_4_ = (__this->fields).IJDAKGKCHLG.fields.currentCryptoKey;
        local_50._4_4_ = (__this->fields).IJDAKGKCHLG.fields.hiddenValue;
        pIVar1 = (Il2CppObject *)
                 thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_TypeInfo,
                                    &local_50);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        goto LAB_03140e34;
        if (4 < (uint)args->max_length) {
          args->m_Items[4] = pIVar1;
          thunk_FUN_01c20e04(args->m_Items + 4,pIVar1);
          local_60._0_1_ = (__this->fields).OPLIEEHBKNE.fields.fakeValueActive;
          local_60._1_1_ = (__this->fields).OPLIEEHBKNE.fields.inited;
          local_60._2_2_ = *(undefined2 *)&(__this->fields).OPLIEEHBKNE.fields.field_0x12;
          uStack_68._0_4_ = (__this->fields).OPLIEEHBKNE.fields.hiddenValueOldByte4;
          uStack_68._4_4_ = (__this->fields).OPLIEEHBKNE.fields.fakeValue;
          local_70._0_4_ = (__this->fields).OPLIEEHBKNE.fields.currentCryptoKey;
          local_70._4_4_ = (__this->fields).OPLIEEHBKNE.fields.hiddenValue;
          pIVar1 = (Il2CppObject *)
                   thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_TypeInfo,
                                      &local_70);
          if ((pIVar1 != (Il2CppObject *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0
             )) goto LAB_03140e34;
          if (5 < (uint)args->max_length) {
            args->m_Items[5] = pIVar1;
            thunk_FUN_01c20e04(args->m_Items + 5,pIVar1);
            pSVar6 = (__this->fields).NBPNHMKOJKB;
            if ((pSVar6 != (System_String_o *)0x0) &&
               (lVar2 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
               lVar2 == 0)) goto LAB_03140e34;
            if (6 < (uint)args->max_length) {
              args->m_Items[6] = (Il2CppObject *)pSVar6;
              thunk_FUN_01c20e04(args->m_Items + 6,pSVar6);
              pSVar6 = (__this->fields).GAHLHJIMKPF;
              if ((pSVar6 != (System_String_o *)0x0) &&
                 (lVar2 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class),
                 lVar2 == 0)) goto LAB_03140e34;
              if (7 < (uint)args->max_length) {
                args->m_Items[7] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04(args->m_Items + 7,pSVar6);
                uStack_78._0_4_ = (__this->fields).EMHKAKPKLHI.fields.fakeValue;
                uStack_78._4_1_ = (__this->fields).EMHKAKPKLHI.fields.fakeValueActive;
                uStack_78._5_1_ = (__this->fields).EMHKAKPKLHI.fields.inited;
                uStack_78._6_2_ = *(undefined2 *)&(__this->fields).EMHKAKPKLHI.fields.field_0xe;
                local_80._0_4_ = (__this->fields).EMHKAKPKLHI.fields.currentCryptoKey;
                local_80._4_4_ = (__this->fields).EMHKAKPKLHI.fields.hiddenValue;
                pIVar1 = (Il2CppObject *)
                         thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                            &local_80);
                if ((pIVar1 != (Il2CppObject *)0x0) &&
                   (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class),
                   lVar2 == 0)) goto LAB_03140e34;
                if (8 < (uint)args->max_length) {
                  args->m_Items[8] = pIVar1;
                  thunk_FUN_01c20e04(args->m_Items + 8,pIVar1);
                  local_84 = (__this->fields).EEEBPKKLADB;
                  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(uint_TypeInfo,&local_84);
                  if ((pIVar1 != (Il2CppObject *)0x0) &&
                     (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class),
                     lVar2 == 0)) goto LAB_03140e34;
                  if (9 < (uint)args->max_length) {
                    args->m_Items[9] = pIVar1;
                    thunk_FUN_01c20e04(args->m_Items + 9,pIVar1);
                    pSVar3 = System_String__Format(pSVar3,args,(MethodInfo *)0x0);
                    return pSVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03140e30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

