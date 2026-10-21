// Nekki.SF2.Core.Fights.ModelContainer$$LPACIEFGEOB @ RVA 0x355FB98

void Nekki_SF2_Core_Fights_ModelContainer__LPACIEFGEOB
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Camera_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  System_Action_OLKKAIFGGAK__o *pSVar4;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  
  if ((DAT_04568bd5 & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_CFOFLMBPNOE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MDPKLJJENLO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MPICEHINPFC__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_NCCFAEMDMKL__);
    DAT_04568bd5 = 1;
  }
  pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
    UVar5 = UnityEngine_Camera__ScreenToWorldPoint
                      (pUVar2,(UnityEngine_Vector3_o)ZEXT812(0),(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Camera_o *)0x0) {
        UVar7.fields.x = (float)iVar1;
        UVar7.fields.y = 0.0;
        UVar7.fields.z = 0.0;
        UVar7 = UnityEngine_Camera__ScreenToWorldPoint(pUVar2,UVar7,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar8 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
            OLKKAIFGGAK__PKEJJCMJCEE
                      (BCKBBGCOMJD,UVar5.fields.x - UVar6.fields.x,UVar7.fields.x - UVar8.fields.x,0
                       ,0,(MethodInfo *)0x0);
            CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                          thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
            System_Action<object>___ctor();
            OLKKAIFGGAK__NGAJMJGFOKC(BCKBBGCOMJD,CJNHFNHJHPE,(MethodInfo *)0x0);
            pSVar4 = (System_Action_OLKKAIFGGAK__o *)
                     thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo);
            System_Action<object>___ctor();
            OLKKAIFGGAK__PCOHFCHDCIO(BCKBBGCOMJD,pSVar4,(MethodInfo *)0x0);
            pSVar4 = (System_Action_OLKKAIFGGAK__o *)
                     thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo);
            System_Action<object>___ctor();
            OLKKAIFGGAK__INNOCFHJLHO(BCKBBGCOMJD,pSVar4,(MethodInfo *)0x0);
            CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            OLKKAIFGGAK__OEEKAHPBKFN(BCKBBGCOMJD,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

