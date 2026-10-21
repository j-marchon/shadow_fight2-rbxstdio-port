// AHOEIGAOKEL$$GIENGNEGHPJ @ RVA 0x30CF2D4

void AHOEIGAOKEL__GIENGNEGHPJ
               (AHOEIGAOKEL_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,float ECCPLAMGAKE,
               UnityEngine_GameObject_o *ODNJEHJPBGA,System_Action_object__o *IELDNEAAPBE,
               Nekki_SF2_GUI_Dialogs_NewsDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  int32_t length;
  System_Action_object__o **ppSVar1;
  System_Action_string__o *CJNHFNHJHPE;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE_00;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar2;
  DGGBFKNKEAH_o *pDVar3;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o **ppNVar4;
  UnityEngine_GameObject_o **ppUVar5;
  
  if ((DAT_045662f5 & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_IHKHIJONLCM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_JCLPLBEJHGM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_POGAGHOPPEI__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Clear__);
    DAT_045662f5 = 1;
  }
  ppUVar5 = &(__this->fields).MEMMHKLOBKN;
  *ppUVar5 = ODNJEHJPBGA;
  (__this->fields).KKJILEFHKAC = OAGELANKMBH;
  (__this->fields).HBEMCBKLCOE = IOJNHKIPJOK;
  (__this->fields).MBFIKHPCODJ = ECCPLAMGAKE;
  thunk_FUN_01c20e04(ppUVar5,ODNJEHJPBGA);
  pSVar2 = (__this->fields).PGCBEJGMIMA;
  if (pSVar2 != (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    ppSVar1 = &(__this->fields).DNPHBCPFMPB;
    *ppSVar1 = IELDNEAAPBE;
    thunk_FUN_01c20e04(ppSVar1,IELDNEAAPBE);
    ppNVar4 = &(__this->fields).ILCGLGPADOK;
    *ppNVar4 = LMEHKLFGEHI;
    thunk_FUN_01c20e04(ppNVar4,LMEHKLFGEHI);
    (__this->fields).GPIIGPOLINL = 0;
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__APIBGCEDBJA(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      if (DAT_045655e8 == '\0') {
        FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
        DAT_045655e8 = '\x01';
      }
      pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
      CJNHFNHJHPE_00 =
           (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
        DGGBFKNKEAH__OMNHIKEFCCG(pDVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        if (DAT_045655e8 == '\0') {
          FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
          DAT_045655e8 = '\x01';
        }
        pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
        CJNHFNHJHPE_01 =
             (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo)
        ;
        System_Action<object>___ctor();
        if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
          DGGBFKNKEAH__AOMBGFMAOMJ(pDVar3,CJNHFNHJHPE_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

