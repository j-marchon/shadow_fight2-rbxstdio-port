// Nekki.SF2.Core.Fights.ModelContainer$$OGCMOEOKOJP @ RVA 0x35610C8

void Nekki_SF2_Core_Fights_ModelContainer__OGCMOEOKOJP
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,int32_t DPJIDNBJIBG,
               OLKKAIFGGAK_o *GANEIBPLOIA,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  PKNBJJPHAKI_o *__this_00;
  OLKKAIFGGAK_o *method_00;
  KHEDNGODOIC_o *pKVar3;
  
  method_00 = GANEIBPLOIA;
  if ((DAT_04568bc6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04568bc6 = 1;
  }
  pSVar2 = (__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if (((DPJIDNBJIBG < 0) || (iVar1 = (pSVar2->fields)._size, iVar1 == 0)) ||
       (iVar1 + -1 < DPJIDNBJIBG)) {
LAB_0366119c:
      Nekki_SF2_Core_Fights_ModelContainer__HMDJFLDLPMN(__this,GANEIBPLOIA,(MethodInfo *)method_00);
      return;
    }
    GANEIBPLOIA = (OLKKAIFGGAK_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                             Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    pKVar3 = (__this->fields).ANDGPHHMNMC;
    if ((pKVar3 != (KHEDNGODOIC_o *)0x0) &&
       (__this_00 = (pKVar3->fields).BAFJNPPPBMK, __this_00 != (PKNBJJPHAKI_o *)0x0)) {
      PKNBJJPHAKI__HMDJFLDLPMN(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      pKVar3 = (__this->fields).ANDGPHHMNMC;
      if (pKVar3 != (KHEDNGODOIC_o *)0x0) {
        KHEDNGODOIC__BALEGGJGENM(pKVar3,GANEIBPLOIA,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GANEIBPLOIA
                     ,(MethodInfo_26E62D4 *)
                      Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
          goto LAB_0366119c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

