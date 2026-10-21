// ALAKLNAPFGK$$DLMMOLDNHKG @ RVA 0x322CB80

void ALAKLNAPFGK__DLMMOLDNHKG(ALAKLNAPFGK_o *__this,HNOIHFFENNC_o *OPAEPDIIOEB,MethodInfo *method)

{
  long lVar1;
  System_Object_array *args;
  long lVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  System_String_o *local_80;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint64_t uStack_50;
  System_String_o *pSStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_04566fb5 & 1) == 0) {
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22398);
    FUN_01bab630(&StringLiteral_13905);
    DAT_04566fb5 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,6);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_13905 == (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    lVar2 = thunk_FUN_01bda71c(StringLiteral_13905,(((args->obj).klass)->_1).element_class);
    pIVar3 = StringLiteral_13905;
    if (lVar2 == 0) goto LAB_0332cdd8;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar3;
    thunk_FUN_01c20e04();
    uStack_88._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.lo;
    uStack_88._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.mid;
    local_90._0_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.flags;
    local_90._4_4_ = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.hi;
    pSStack_48 = (OPAEPDIIOEB->fields).IEINLOAOCLD;
    uStack_50 = (OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
    pSStack_78 = (OPAEPDIIOEB->fields).ODNJEBGJAAD;
    local_80 = (OPAEPDIIOEB->fields).IIHFLLPKBJI;
    pSStack_68 = (OPAEPDIIOEB->fields).AIKDONIPAMF;
    uStack_70 = *(undefined8 *)&(OPAEPDIIOEB->fields).PIGNHMJGDHM;
    local_60 = local_90;
    uStack_58 = uStack_88;
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(System_Decimal_TypeInfo,&local_90);
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_0332cdd8:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar3);
      pSVar5 = (OPAEPDIIOEB->fields).ODNJEBGJAAD;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_0332cdd8;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)pSVar5;
        thunk_FUN_01c20e04(args->m_Items + 2,pSVar5);
        pSVar5 = (OPAEPDIIOEB->fields).IIHFLLPKBJI;
        if ((pSVar5 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        goto LAB_0332cdd8;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = (Il2CppObject *)pSVar5;
          thunk_FUN_01c20e04(args->m_Items + 3,pSVar5);
          pIVar3 = (Il2CppObject *)(OPAEPDIIOEB->fields).IHEKPOBGEJC.fields.ulomidLE;
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0
             )) goto LAB_0332cdd8;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar3;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar3);
            pSVar5 = (OPAEPDIIOEB->fields).AIKDONIPAMF;
            if ((pSVar5 != (System_String_o *)0x0) &&
               (lVar2 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class),
               lVar2 == 0)) goto LAB_0332cdd8;
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = (Il2CppObject *)pSVar5;
              thunk_FUN_01c20e04(args->m_Items + 5,pSVar5);
              pSVar5 = System_String__Format(StringLiteral_22398,args,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
              if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

