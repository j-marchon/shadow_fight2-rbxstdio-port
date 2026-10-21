// Original name: Nekki.SF2.Core.Quests.QuestAction  (obfuscated BOFEMGGNODC)
// TypeDefIndex 2109
// Namespace: 
// public class QuestAction
// Fields:
//   private FPPKHNNABAD <AFGEOOAHIGH>k__BackingField; // 0x10
//   public Action<MEMHEPBAJJA> EKJDIBEOCDF; // 0x18
//   private Action<PKHMIGFEJCL> BHHLJDLBINB; // 0x20
//   public int HLFBMBHOPMI; // 0x28
//   public string LEMICKEFMOJ; // 0x30
//   private string <LLOFHDDBKFD>k__BackingField; // 0x38
//   public string JPCLFPPBNNN; // 0x40
//   public int EAJHGODFKID; // 0x48
//   public PKHMIGFEJCL IJOKKFKPBEP; // 0x50
//   private string BNCJPLDMJMH; // 0x58
//   private QuestAction.HPPABGLHGMP EPPJLCHLIDH; // 0x60

// ===== public virtual void PKIFMKGDJJN()  [RVA 0x32CCD88]
// QuestAction$$PKIFMKGDJJN @ RVA 0x32CCD88

void QuestAction__PKIFMKGDJJN(QuestAction_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void PMLCLBELGDB(FPPKHNNABAD CJNHFNHJHPE)  [RVA 0x32CCD8C]
// QuestAction$$PMLCLBELGDB @ RVA 0x32CCD8C

void QuestAction__PMLCLBELGDB(QuestAction_o *__this,FPPKHNNABAD_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AFGEOOAHIGH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public virtual void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32C4CB0]
// QuestAction$$MAHFCKJGBPP @ RVA 0x32C4CB0

void QuestAction__MAHFCKJGBPP(QuestAction_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  NDPMLPGANCI_o *__this_00;
  PKHMIGFEJCL_o **ppPVar4;
  System_Type_o *left;
  System_Type_o *right;
  MethodInfo *method_00;
  char *pcVar5;
  System_String_o *str1;
  
  if ((DAT_04567522 & 1) == 0) {
    FUN_01bab630(&QuestAction_var);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_535/*" started "*/);
    FUN_01bab630(&StringLiteral_10644/*"QuestAction "*/);
    FUN_01bab630(&StringLiteral_10645/*"QuestAction::RunAction: auto-completed for final QuestAction instance"*/);
    DAT_04567522 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[9].klass != (Il2CppClass *)0x0)) &&
     (pcVar5 = ((pIVar2[9].klass)->_1).namespaze, pcVar5 != (char *)0x0)) {
    if (pcVar5[0x11] != '\0') {
      str1 = (__this->fields).LEMICKEFMOJ;
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._8_OFPHPMGMCAL.methodPtr)
                         (__this,(__this->klass->vtable)._8_OFPHPMGMCAL.method);
      pSVar3 = System_String__Concat
                         (StringLiteral_10644/*"QuestAction "*/,str1,StringLiteral_535/*" started "*/,pSVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    if ((__this->fields).EPPJLCHLIDH != 0) {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (NDPMLPGANCI_o *)0x0) goto LAB_033c4f20;
      NDPMLPGANCI__FNNPPGPMCFE(__this_00,true,(__this->fields).EPPJLCHLIDH == 2,0,(MethodInfo *)0x0)
      ;
    }
    bVar1 = System_String__IsNullOrEmpty((__this->fields).BNCJPLDMJMH,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = (__this->fields).BNCJPLDMJMH;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__CJKCKACIIHK(pSVar3,false,1.0,1.0,(MethodInfo *)0x0);
    }
    ppPVar4 = &(__this->fields).IJOKKFKPBEP;
    *ppPVar4 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
    handle = QuestAction_var;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    left = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    right = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10645/*"QuestAction::RunAction: auto-completed for final QuestAction instance"*/,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL(__this,method_00);
      return;
    }
    return;
  }
LAB_033c4f20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FGNINNOOCCL()  [RVA 0x32C4F24]
// QuestAction$$FGNINNOOCCL @ RVA 0x32C4F24

void QuestAction__FGNINNOOCCL(QuestAction_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  Il2CppObject *pIVar1;
  System_String_o *message;
  char *pcVar2;
  System_Action_PKHMIGFEJCL__o *pSVar3;
  
  if ((DAT_04567523 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10644/*"QuestAction "*/);
    FUN_01bab630(&StringLiteral_375/*" completed"*/);
    DAT_04567523 = 1;
  }
  if ((__this->fields).EPPJLCHLIDH != 0) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NDPMLPGANCI_o *)0x0) goto LAB_033c5060;
    NDPMLPGANCI__FNNPPGPMCFE(__this_00,false,true,0,(MethodInfo *)0x0);
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[9].klass != (Il2CppClass *)0x0)) &&
     (pcVar2 = ((pIVar1[9].klass)->_1).namespaze, pcVar2 != (char *)0x0)) {
    if (pcVar2[0x11] != '\0') {
      message = System_String__Concat
                          (StringLiteral_10644/*"QuestAction "*/,(__this->fields).LEMICKEFMOJ,StringLiteral_375/*" completed"*/,
                           (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).BHHLJDLBINB;
    if (pSVar3 != (System_Action_PKHMIGFEJCL__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(__this->fields).IJOKKFKPBEP,
                 (pSVar3->fields).super.super.method);
      return;
    }
  }
LAB_033c5060:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HAFNHPBMIBI(Action<PKHMIGFEJCL> CJNHFNHJHPE)  [RVA 0x32CCD94]
// QuestAction$$HAFNHPBMIBI @ RVA 0x32CCD94

void QuestAction__HAFNHPBMIBI
               (QuestAction_o *__this,System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PKHMIGFEJCL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PKHMIGFEJCL__o *pSVar5;
  System_Action_PKHMIGFEJCL__o **ppSVar6;
  System_Action_PKHMIGFEJCL__o *source;
  
  if ((DAT_04567524 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    DAT_04567524 = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<PKHMIGFEJCL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PKHMIGFEJCL>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PKHMIGFEJCL__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void ECNMJHLBFLC(string CJNHFNHJHPE)  [RVA 0x32CCE44]
// QuestAction$$ECNMJHLBFLC @ RVA 0x32CCE44

void QuestAction__ECNMJHLBFLC(QuestAction_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LLOFHDDBKFD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string OHKGKIIDAHI()  [RVA 0x32CCE4C]
// QuestAction$$OHKGKIIDAHI @ RVA 0x32CCE4C

System_String_o * QuestAction__OHKGKIIDAHI(QuestAction_o *__this,MethodInfo *method)

{
  return (__this->fields)._LLOFHDDBKFD_k__BackingField;
}


// ===== private static QuestAction.HPPABGLHGMP FOLPIHAMEJE(string CJNHFNHJHPE)  [RVA 0x32CCE54]
// QuestAction$$FOLPIHAMEJE @ RVA 0x32CCE54

uint8_t QuestAction__FOLPIHAMEJE(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  uint8_t uVar2;
  
  if ((DAT_04567525 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14806/*"Visible"*/);
    FUN_01bab630(&StringLiteral_12132/*"Silent"*/);
    DAT_04567525 = 1;
  }
  bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_12132/*"Silent"*/,(MethodInfo *)0x0);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_14806/*"Visible"*/,(MethodInfo *)0x0);
    uVar2 = 2;
    if (!bVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}


// ===== public FPPKHNNABAD GFDHFIPKFPB()  [RVA 0x32CCEE0]
// QuestAction$$GFDHFIPKFPB @ RVA 0x32CCEE0

FPPKHNNABAD_o * QuestAction__GFDHFIPKFPB(QuestAction_o *__this,MethodInfo *method)

{
  return (__this->fields)._AFGEOOAHIGH_k__BackingField;
}


// ===== public virtual void IEFEBMICIHN(XmlNode NPLGCIFGFOK, LCKCDEKNLOA DLOFGOGAGAA, Action IELDNEAAPBE)  [RVA 0x32CCEE8]
// QuestAction$$IEFEBMICIHN @ RVA 0x32CCEE8

/* WARNING: Removing unreachable block (ram,0x033cd1c8) */

void QuestAction__IEFEBMICIHN
               (QuestAction_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,LCKCDEKNLOA_o *DLOFGOGAGAA,
               System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  byte bVar1;
  System_Action_c *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *HCBBECJJIKK;
  QuestAction_o *CPECAEHDDDB;
  System_Action_o *pSVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  System_Action_o **ppSVar9;
  
  if ((DAT_04567526 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567526 = 1;
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_033ccfe4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ccfe4:
        uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) goto LAB_033cd134;
          lVar6 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_033cd108;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_033cd0f0;
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_033cd044;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033cd044:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        HCBBECJJIKK = (System_String_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        CPECAEHDDDB = PFLBGCPNEIM__EOHMFJFFFIN
                                (HCBBECJJIKK,(__this->fields)._LLOFHDDBKFD_k__BackingField,
                                 (__this->fields)._AFGEOOAHIGH_k__BackingField,AHDGNOJPPIB,
                                 (MethodInfo *)0x0);
        if (DLOFGOGAGAA == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LCKCDEKNLOA__IEFEBMICIHN(DLOFGOGAGAA,CPECAEHDDDB,(MethodInfo *)0x0);
      } while( true );
    }
    goto LAB_033cd1c0;
  }
  goto LAB_033cd134;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_033cd0f0:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033cd124;
    }
  }
LAB_033cd108:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033cd124:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_033cd134:
  if (DLOFGOGAGAA != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__LEOHNCOCKCI(DLOFGOGAGAA,(MethodInfo *)0x0);
    ppSVar9 = &(DLOFGOGAGAA->fields).BHHLJDLBINB;
    pSVar5 = (System_Action_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)*ppSVar9,(System_Delegate_o *)IELDNEAAPBE,
                        (MethodInfo *)0x0);
    pSVar2 = System_Action_TypeInfo;
    if (pSVar5 == (System_Action_o *)0x0) {
      *ppSVar9 = (System_Action_o *)0x0;
    }
    else if ((pSVar5->klass != System_Action_TypeInfo) ||
            (*ppSVar9 = pSVar5, pSVar5->klass != pSVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar5);
    }
    thunk_FUN_01c20e04(ppSVar9,pSVar5);
    return;
  }
LAB_033cd1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual List<QuestAction> HELIKPINEIM()  [RVA 0x32CD298]
// QuestAction$$HELIKPINEIM @ RVA 0x32CD298

System_Collections_Generic_List_BOFEMGGNODC__o *
QuestAction__HELIKPINEIM(QuestAction_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0;
}


// ===== public void GIMAJOGGBHM(string HBDNGIDONHG, FPPKHNNABAD LFHPEEKGNDO, XmlNode AHDGNOJPPIB)  [RVA 0x32CD2A0]
// QuestAction$$GIMAJOGGBHM @ RVA 0x32CD2A0

void QuestAction__GIMAJOGGBHM
               (QuestAction_o *__this,System_String_o *HBDNGIDONHG,FPPKHNNABAD_o *LFHPEEKGNDO,
               System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  (__this->fields)._LLOFHDDBKFD_k__BackingField = HBDNGIDONHG;
  thunk_FUN_01c20e04();
  (__this->fields)._AFGEOOAHIGH_k__BackingField = LFHPEEKGNDO;
  thunk_FUN_01c20e04(&__this->fields,LFHPEEKGNDO);
                    /* WARNING: Could not recover jumptable at 0x033cd2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
  return;
}


// ===== public void .ctor()  [RVA 0x32C49F8]
// QuestAction$$.ctor @ RVA 0x32C49F8

void QuestAction___ctor(QuestAction_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4990 with catch @ 033c49f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49d4 with catch @ 033c49fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c4948 with catch @ 033c4a00
                        */
                    /* try { // try from 033c4a18 to 034c4a1b has its CatchHandler @ 033c4a3c */
  if ((DAT_04567527 & 1) == 0) {
                    /* try { // try from 033c4a1c to 034c4a43 has its CatchHandler @ 033c484c */
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
                    /* catch() { ... } // from try @ 033c4a18 with catch @ 033c4a3c */
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
                    /* try { // try from 033c4a44 to 034c4a4b has its CatchHandler @ 033c4a60 */
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
                    /* try { // try from 033c4a4c to 034c4a57 has its CatchHandler @ 033c484c */
    FUN_01bab630(&QuestAction_<>c_TypeInfo);
                    /* try { // try from 033c4a58 to 034c4a5f has its CatchHandler @ 033c4a60 */
    DAT_04567527 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c4a44 with catch @ 033c4a60
                       catch(type#2 @ 00000000) { ... } // from try @ 033c4a58 with catch @ 033c4a60
                        */
  if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (QuestAction_o *)0x0) {
    ppSVar1 = &(__this->fields).EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual string OFPHPMGMCAL()  [RVA 0x32CD2E8]
// QuestAction$$OFPHPMGMCAL @ RVA 0x32CD2E8

System_String_o * QuestAction__OFPHPMGMCAL(QuestAction_o *__this,MethodInfo *method)

{
  return (System_String_o *)0x0;
}


// ===== public virtual void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32C5068]
// QuestAction$$HNIHOIAMDPC @ RVA 0x32C5068

void QuestAction__HNIHOIAMDPC
               (QuestAction_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  
  if ((DAT_04567528 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8598/*"Lock"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567528 = 1;
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(NPLGCIFGFOK->klass->vtable)._8_unknown.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._8_unknown.method);
    (__this->fields).LEMICKEFMOJ = pSVar2;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8598/*"Lock"*/,(MethodInfo *)0x0);
      pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      uVar1 = QuestAction__FOLPIHAMEJE(pSVar2,method_00);
      (__this->fields).EPPJLCHLIDH = uVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12226/*"Sound"*/,(MethodInfo *)0x0);
        pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar5 = &(__this->fields).BNCJPLDMJMH;
        *ppSVar5 = pSVar2;
        thunk_FUN_01c20e04(ppSVar5,pSVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KIBBEDPGMBB(XmlNode NPLGCIFGFOK, LCKCDEKNLOA DLOFGOGAGAA, Action IELDNEAAPBE)  [RVA 0x32CD2F0]
// QuestAction$$KIBBEDPGMBB @ RVA 0x32CD2F0

void QuestAction__KIBBEDPGMBB
               (QuestAction_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,LCKCDEKNLOA_o *DLOFGOGAGAA,
               System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  System_Action_c *pSVar1;
  System_Delegate_o *b;
  LCKCDEKNLOA_Fields *pLVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04567529 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_NCMDBJEPELD__);
    DAT_04567529 = 1;
  }
  (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
            (__this,NPLGCIFGFOK,DLOFGOGAGAA,IELDNEAAPBE,
             (__this->klass->vtable)._6_IEFEBMICIHN.method);
  if (DLOFGOGAGAA != (LCKCDEKNLOA_o *)0x0) {
    pLVar2 = &DLOFGOGAGAA->fields;
    pSVar3 = pLVar2->IGHHPBIADKJ;
    b = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pSVar3 = (System_Action_o *)
             System_Delegate__Combine((System_Delegate_o *)pSVar3,b,(MethodInfo *)0x0);
    pSVar1 = System_Action_TypeInfo;
    if (pSVar3 == (System_Action_o *)0x0) {
      pLVar2->IGHHPBIADKJ = (System_Action_o *)0x0;
    }
    else if ((pSVar3->klass != System_Action_TypeInfo) ||
            (pLVar2->IGHHPBIADKJ = pSVar3, pSVar3->klass != pSVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3);
    }
    thunk_FUN_01c20e04(pLVar2,pSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected bool EDMJCPEGFOC()  [RVA 0x32CD3E8]
// QuestAction$$EDMJCPEGFOC @ RVA 0x32CD3E8

bool QuestAction__EDMJCPEGFOC(QuestAction_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Fight_o *pFVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar3;
  Nekki_SF2_Core_Fights_Controls_GameController_o *x;
  
  if ((DAT_0456752a & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Model>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456752a = 1;
    method = extraout_x1;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  x = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO != (Fight_o *)0x0) {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if ((pFVar2 != (Fight_o *)0x0) &&
         (pSVar3 = (pFVar2->fields).IILLHHPGGKA,
         pSVar3 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) {
        return 0 < (pSVar3->fields)._size;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}


// ===== public void EIAAJACOKDP(Action<PKHMIGFEJCL> CJNHFNHJHPE)  [RVA 0x32CD554]
// QuestAction$$EIAAJACOKDP @ RVA 0x32CD554

void QuestAction__EIAAJACOKDP
               (QuestAction_o *__this,System_Action_PKHMIGFEJCL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_PKHMIGFEJCL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_PKHMIGFEJCL__o *pSVar5;
  System_Action_PKHMIGFEJCL__o **ppSVar6;
  System_Action_PKHMIGFEJCL__o *a;
  
  if ((DAT_0456752b & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    DAT_0456752b = 1;
  }
  ppSVar6 = &(__this->fields).BHHLJDLBINB;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<PKHMIGFEJCL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<PKHMIGFEJCL>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_PKHMIGFEJCL__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void NCMDBJEPELD()  [RVA 0x32CD604]
// QuestAction$$NCMDBJEPELD @ RVA 0x32CD604

void QuestAction__NCMDBJEPELD(QuestAction_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  
  if ((__this->fields).EPPJLCHLIDH == 0) {
    return;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__FNNPPGPMCFE(__this_00,false,true,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

