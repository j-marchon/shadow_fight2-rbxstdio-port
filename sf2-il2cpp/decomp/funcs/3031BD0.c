// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$Init @ RVA 0x3031BD0

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
               KPBOJBLLKPJ_o *KBIIAPCMIGJ,MKIDEJJPLCE_o *DOOAEHPGKNL,int32_t HPIPAGINPJK,
               MethodInfo *method)

{
  MKIDEJJPLCE_o **ppMVar1;
  KPBOJBLLKPJ_o **ppKVar2;
  
  ppMVar1 = &(__this->fields)._chatPanel;
  *ppMVar1 = DOOAEHPGKNL;
  thunk_FUN_01c20e04(ppMVar1,DOOAEHPGKNL);
  ppKVar2 = &(__this->fields).EBBJNLDAMCC;
  *ppKVar2 = KBIIAPCMIGJ;
  thunk_FUN_01c20e04(ppKVar2,KBIIAPCMIGJ);
  (__this->fields).FIACGKGFFJP = HPIPAGINPJK;
  TabView__Init((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}

