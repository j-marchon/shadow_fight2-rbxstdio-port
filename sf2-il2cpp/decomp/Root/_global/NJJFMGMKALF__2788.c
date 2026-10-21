// TypeDefIndex 2788
// Namespace: 
// public class NJJFMGMKALF : BOFEMGGNODC
// Fields:

// ===== public void .ctor()  [RVA 0x3414470]
// NJJFMGMKALF$$.ctor @ RVA 0x3414470

void NJJFMGMKALF___ctor(NJJFMGMKALF_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3414478]
// NJJFMGMKALF$$MAHFCKJGBPP @ RVA 0x3414478

void NJJFMGMKALF__MAHFCKJGBPP(NJJFMGMKALF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  NJJFMGMKALF__EGMMOMCKKOP(__this,AAJBIMFNMBB,method_00);
  return;
}


// ===== private void EGMMOMCKKOP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34144A4]
// NJJFMGMKALF$$EGMMOMCKKOP @ RVA 0x34144A4

void NJJFMGMKALF__EGMMOMCKKOP(NJJFMGMKALF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  MAEAAOFOANA_o *DKMMBMBMJBO;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  void **ppvVar2;
  
  if ((DAT_0456809a & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MAEAAOFOANA>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MAEAAOFOANA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MAEAAOFOANA>_get_Item__);
    FUN_01bab630(&Method_NJJFMGMKALF_NGCOJKOBJFM_OKKBLGDCOLA__);
    FUN_01bab630(&NJJFMGMKALF_NGCOJKOBJFM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_0456809a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NJJFMGMKALF_NGCOJKOBJFM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    ppvVar2 = &__this_00[1].monitor;
    *ppvVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppvVar2,AAJBIMFNMBB);
    if ((*ppvVar2 != (void *)0x0) &&
       (pSVar1 = *(System_Collections_Generic_List_object__o **)((long)*ppvVar2 + 0x30),
       pSVar1 != (System_Collections_Generic_List_object__o *)0x0)) {
      if ((pSVar1->fields)._size < 1) {
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
      DKMMBMBMJBO = (MAEAAOFOANA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar1,0,
                               Method_System_Collections_Generic_List<MAEAAOFOANA>_get_Item__);
      if ((*ppvVar2 != (void *)0x0) &&
         (pSVar1 = *(System_Collections_Generic_List_object__o **)((long)*ppvVar2 + 0x30),
         pSVar1 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__RemoveAt
                  (pSVar1,0,Method_System_Collections_Generic_List<MAEAAOFOANA>_RemoveAt__);
        __this_01 = JJPNLEPEAFM__EFLNJLIDLEF(DKMMBMBMJBO,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
          Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                    ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,0,IELDNEAAPBE,
                     Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

