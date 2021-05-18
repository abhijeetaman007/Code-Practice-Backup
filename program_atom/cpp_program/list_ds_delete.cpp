void delete(int i)
{
    j<-0
    temp<-head
    while(j<i-1) //0 based indexing
    {
        temp<-(temp->next)
    }
    (temp->next)<-(temp->next->next)
    return
}
