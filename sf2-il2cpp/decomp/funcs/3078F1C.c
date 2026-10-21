// CPNHNIKFGFB$$BENGKDEEPGK @ RVA 0x3078F1C

void CPNHNIKFGFB__BENGKDEEPGK(CPNHNIKFGFB_o *__this,int32_t CEOLOKFCKIG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *KCFLBKINDFM;
  System_Collections_Generic_List_int__o *__this_00;
  System_String_o *pSVar3;
  System_Action_object__o *IELDNEAAPBE;
  System_Int32_array *pSVar4;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  System_String_o *EHNFGMGKCHO;
  int32_t local_44;
  
  local_44 = CEOLOKFCKIG;
  if ((DAT_04565fc6 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CPNHNIKFGFB_JAFNPFDOHAP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_3682);
    FUN_01bab630(&StringLiteral_3680);
    FUN_01bab630(&StringLiteral_8862);
    FUN_01bab630(&StringLiteral_3675);
    FUN_01bab630(&StringLiteral_17778);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17798);
    FUN_01bab630(&StringLiteral_3678);
    FUN_01bab630(&StringLiteral_17761);
    FUN_01bab630(&StringLiteral_3676);
    FUN_01bab630(&StringLiteral_15149);
    FUN_01bab630(&StringLiteral_17777);
    FUN_01bab630(&StringLiteral_11862);
    FUN_01bab630(&StringLiteral_17792);
    FUN_01bab630(&StringLiteral_4301);
    FUN_01bab630(&StringLiteral_3681);
    FUN_01bab630(&StringLiteral_10321);
    FUN_01bab630(&StringLiteral_17762);
    FUN_01bab630(&StringLiteral_17760);
    FUN_01bab630(&StringLiteral_17775);
    FUN_01bab630(&StringLiteral_17786);
    FUN_01bab630(&StringLiteral_17757);
    FUN_01bab630(&StringLiteral_17759);
    FUN_01bab630(&StringLiteral_3684);
    FUN_01bab630(&StringLiteral_11508);
    FUN_01bab630(&StringLiteral_3679);
    FUN_01bab630(&StringLiteral_3677);
    FUN_01bab630(&StringLiteral_9304);
    FUN_01bab630(&StringLiteral_13948);
    FUN_01bab630(&StringLiteral_9623);
    FUN_01bab630(&StringLiteral_3683);
    FUN_01bab630(&StringLiteral_11509);
    FUN_01bab630(&StringLiteral_17758);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_20395);
    FUN_01bab630(&StringLiteral_15148);
    DAT_04565fc6 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  __this_00 = (__this->fields).FNOGEEODGCE;
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_0317951c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pSVar4 == (System_Int32_array *)0x0) goto LAB_0317951c;
  uVar1 = (__this_00->fields)._size;
  if (uVar1 < (uint)pSVar4->max_length) {
    (__this_00->fields)._size = uVar1 + 1;
    pSVar4->m_Items[(int)uVar1] = CEOLOKFCKIG;
  }
  else {
    System_Collections_Generic_List<int>__AddWithResize
              (__this_00,CEOLOKFCKIG,
               *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
  }
  pSVar3 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  System_String__Concat(StringLiteral_11509,pSVar3,(MethodInfo *)0x0);
  KCFLBKINDFM = StringLiteral_9679;
  pSVar3 = StringLiteral_1;
  pSVar6 = StringLiteral_5840;
  if (local_44 < 0x2717) {
    switch(local_44) {
    case 10000:
      puVar5 = &StringLiteral_10321;
      break;
    case 0x2714:
switchD_03179238_caseD_29cb:
      puVar5 = &StringLiteral_9623;
      break;
    case 0x2715:
      puVar5 = &StringLiteral_20395;
      break;
    case 0x2716:
      puVar5 = &StringLiteral_11862;
      break;
    default:
      if (local_44 == 1) {
        puVar5 = &StringLiteral_5840;
        break;
      }
    case 0x2711:
    case 0x2712:
    case 0x2713:
switchD_03179238_caseD_29c4:
      puVar5 = &StringLiteral_11508;
    }
  }
  else {
    puVar5 = &StringLiteral_3682;
    switch(local_44) {
    case 0x2775:
      puVar5 = &StringLiteral_3679;
      break;
    case 0x2776:
      break;
    case 0x2777:
      puVar5 = &StringLiteral_3684;
      break;
    case 0x2778:
      puVar5 = &StringLiteral_3676;
      break;
    case 0x2779:
      puVar5 = &StringLiteral_3681;
      break;
    case 0x277a:
      puVar5 = &StringLiteral_3678;
      break;
    case 0x277b:
      puVar5 = &StringLiteral_3677;
      break;
    case 0x277c:
      puVar5 = &StringLiteral_3680;
      break;
    case 0x277d:
      puVar5 = &StringLiteral_3675;
      break;
    case 0x277e:
      puVar5 = &StringLiteral_15149;
      break;
    case 0x277f:
      puVar5 = &StringLiteral_15148;
      break;
    case 0x2780:
      puVar5 = &StringLiteral_3683;
      break;
    case 0x2781:
      puVar5 = &StringLiteral_9304;
      break;
    default:
      switch(local_44) {
      case 0x29c2:
        puVar5 = &StringLiteral_8862;
        break;
      case 0x29c3:
        puVar5 = &StringLiteral_17786;
        break;
      case 0x29c4:
        goto switchD_03179238_caseD_29c4;
      case 0x29c5:
        puVar5 = &StringLiteral_17778;
        break;
      case 0x29c6:
        puVar5 = &StringLiteral_17777;
        break;
      case 0x29c7:
        puVar5 = &StringLiteral_17792;
        break;
      case 0x29c8:
        puVar5 = &StringLiteral_4301;
        break;
      case 0x29c9:
        puVar5 = &StringLiteral_17798;
        break;
      case 0x29ca:
        puVar5 = &StringLiteral_13948;
        pSVar6 = StringLiteral_17775;
        break;
      case 0x29cb:
        goto switchD_03179238_caseD_29cb;
      default:
        switch(local_44) {
        case 0x27d8:
          puVar5 = &StringLiteral_17757;
          break;
        case 0x27d9:
          puVar5 = &StringLiteral_17758;
          break;
        case 0x27da:
          puVar5 = &StringLiteral_17762;
          break;
        case 0x27db:
          puVar5 = &StringLiteral_17760;
          break;
        case 0x27dc:
          puVar5 = &StringLiteral_17761;
          break;
        case 0x27dd:
          puVar5 = &StringLiteral_17759;
          break;
        default:
          goto switchD_03179238_caseD_29c4;
        }
      }
    }
  }
  EHNFGMGKCHO = (System_String_o *)*puVar5;
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField == false) {
    IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    JJPNLEPEAFM__OOOIOMHJONP
              (pSVar6,EHNFGMGKCHO,KCFLBKINDFM,pSVar3,IELDNEAAPBE,1,0,false,false,StringLiteral_1,
               true,true,true,(MethodInfo *)0x0);
  }
  return;
}

