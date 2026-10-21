// Nekki.SF2.GUI.Shop.ShopScene$$HELIEIDCGNM @ RVA 0x3435060

void Nekki_SF2_GUI_Shop_ShopScene__HELIEIDCGNM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  bool bVar1;
  int iVar2;
  Il2CppObject *__this_00;
  undefined8 *puVar3;
  DG_Tweening_TweenCallback_o *action;
  HOOAAGABMBL_o *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar8;
  void **ppvVar9;
  long *plVar10;
  
  if ((DAT_04568188 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_JJAPLLEBOHJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
    DAT_04568188 = 1;
    CNDPGGAFHEA = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_TypeInfo,CNDPGGAFHEA);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    Nekki_SF2_GUI_Shop_ShopScene__JLHIDOEJFCC(__this,method_00);
    pNVar4 = (__this->fields)._ItemsPanel;
    if (pNVar4 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      pNVar8 = (pNVar4->fields).HCMDPJADLOL;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar4 = (__this->fields)._ItemsPanel;
      if ((pNVar4 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
         (pNVar8 = (pNVar4->fields).HCMDPJADLOL,
         pNVar8 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
        ppvVar9 = &__this_00[1].monitor;
        *ppvVar9 = (pNVar8->fields)._perksPanel;
        thunk_FUN_01c20e04(ppvVar9);
        if ((*ppvVar9 != (void *)0x0) &&
           (plVar10 = *(long **)((long)*ppvVar9 + 0x40), plVar10 != (long *)0x0)) {
          lVar5 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyCollection_PerkUI__c **)(piVar7 + -2) ==
                  System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_035351c0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01b81914(plVar10,
                                System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo,0);
LAB_035351c0:
          iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
          if (iVar2 == 0) {
            return;
          }
          Nekki_SF2_GUI_Shop_ShopScene__HAIAOFHBGAP(__this,__this_00[1].monitor,true,in_x3);
          t = (__this->fields).OOIFAHNCKAO;
          action = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                    ((Il2CppObject *)t,action,
                     Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

